#include <NewPing.h>      // Ultrasonic sensor optimized library
#include <Servo.h>         // Standard servo control library
#include "HUSKYLENS.h"
#include "SoftwareSerial.h"

// --- Hardware & Communication Setup ---
#define HUSKY_SERIAL Serial1
HUSKYLENS huskylens;
Servo myservo;

// --- Pin Assignments ---
#define ENA 5              // L298N PWM Speed Control Pin
#define IN1 8              // L298N Direction Pin 1
#define IN2 7              // L298N Direction Pin 2

#define TRIGGER_PIN  A0    // Central Ultrasonic Trigger
#define ECHO_PIN     A1    // Central Ultrasonic Echo
#define TRIGGER_PIN2 A2    // Left Ultrasonic Trigger
#define ECHO_PIN2    A3    // Left Ultrasonic Echo
#define TRIGGER_PIN3 A4    // Right Ultrasonic Trigger
#define ECHO_PIN3    A5    // Right Ultrasonic Echo

// --- Telemetría y Límites Físicos ---
#define MAX_DISTANCE 400   // Max sensor distance rating in cm
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
NewPing lsonar(TRIGGER_PIN2, ECHO_PIN2, MAX_DISTANCE);
NewPing Rsonar(TRIGGER_PIN3, ECHO_PIN3, MAX_DISTANCE);

int rightDistance = 0;
int leftDistance = 0;
int middleDistance = 0;

// --- HuskyLens ID Mapping ---
int ID1 = 1;               // Red Block - Unlearned signature alternative
int ID2 = 2;               // Red Block - Main signature
int ID3 = 3;               // Red Block - Backup signature
int ID4 = 4;               // Green Block - Unlearned signature alternative
int ID5 = 5;               // Green Block - Main signature
int ID6 = 6;               // Green Block - Backup signature

// --- Control de Tracción y Dirección (Métricas PWM / Angulares) ---
int carSpeed = 50;         // Cruise PWM speed
int carSpeedColor = 70;    // Evasion maneuver PWM speed
int carSpeedCurvas = 70;   // Cornering PWM speed
int centro = 94;           // Steering absolute neutral point
int centroA = 94;          // Anti-clockwise correction center
int centroH = 94;          // Clockwise correction center

// --- Variables de Estado e Histéresis ---
int contadorLecturas = 0;
int winnie = 220;          // Red block evasion delay (ms)
int winnieV = 100;         // Green block evasion delay (ms)

int pepe = 0;              // FSM State counter (Initialization & End-of-Run)
int tilin = 0;             // Anti-clockwise run flag
int grasa = 0;             // Clockwise run flag
int lewis = 0;             // Right flank maneuver counter
int lecrer = 0;            // Left flank maneuver counter

// --- Function Prototypes ---
void printResult(HUSKYLENSResult result);
void stop();
void back();
void forward();
void freno();
void izquierda();
void derecha();
void rojoderecha();
void rojoizquierda();
void verdeizquierda();
void verdederecha();

void setup() {
    Serial.begin(115200);
    HUSKY_SERIAL.begin(9600);
    
    // HuskyLens Serial Handshake Validation
    while (!huskylens.begin(HUSKY_SERIAL)) {
        Serial.println(F("Begin failed!"));
        Serial.println(F("1. Please recheck Protocol Type in HUSKYLENS (General Settings >> Protocol Type >> Serial 9600)"));
        Serial.println(F("2. Please recheck hardware connections."));
        delay(100);
    }
    
    // Actuators & Driver Initialization
    myservo.attach(3);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(ENA, OUTPUT);
}

void loop() {
    // --- Secuencia de Arranque Único (Single-Shot Initialization) ---
    if (pepe == 0) {
        myservo.write(80);
        delay(1000);
        myservo.write(centro);
        delay(1000);
        forward(); 
        pepe++;
    }

    forward();

    // --- Algoritmo de Fin de Carrera (Safety Stop) ---
    if (pepe > 12) {
        delay(1);
        forward();
        myservo.write(centro);
        delay(1000);
        stop();
        while(true) {
            delay(1000000000); // Infinite loop to park safety
        }
    }

    // --- Actualización de Telemetría Tri-Sensorial ---
    middleDistance = sonar.ping_cm();
    leftDistance = lsonar.ping_cm();
    rightDistance = Rsonar.ping_cm();

    // --- Lazo de Evasión Crítica Frontal ---
    if (middleDistance <= 3 && middleDistance > 1) {
        analogWrite(ENA, 100);
        Serial.println(middleDistance);
        forward();
        pepe++;

        // Determinar sentido del circuito en el primer obstáculo
        if (leftDistance <= rightDistance && grasa == 0) {
            tilin++;
            lecrer++;
        } 
        else if (leftDistance > rightDistance && tilin == 0) {
            grasa++;
            lewis++;
        }

        // Ejecución de maniobra de escape según flanco libre
        if (tilin > 0 && grasa == 0 && lecrer >= 0) {
            derecha();
        } 
        else if (grasa > 0 && lewis >= 0) {
            izquierda();
        }
    }   

    // --- Lazo Cerrado de Microajustes Proporcionales Laterales ---
    if (leftDistance <= 40 && leftDistance > 1 && pepe > 0) {
        myservo.write(105);   // Micro-correction away from left wall
        delay(30);
        myservo.write(centroH);
    }
    if (rightDistance <= 40 && rightDistance > 1 && pepe > 0) {
        myservo.write(75);    // Micro-correction away from right wall
        delay(30);
        myservo.write(centroA);
    }
    delay(100);

    // --- Procesamiento de Visión Artificial (HuskyLens Pipeline) ---
    analogWrite(ENA, carSpeed); 
    if (huskylens.request()) {
        Serial.println("###################################");
        Serial.println(String() + F("Count of learned IDs:") + huskylens.countLearnedIDs());
        Serial.println(String() + F("Frame number:") + huskylens.frameNumber());
        Serial.println("#######");
        Serial.println(String() + F("Get all blocks and arrows. Count:") + huskylens.count());
        
        for (int i = 0; i < huskylens.count(); i++) {
            HUSKYLENSResult result = huskylens.get(i);
            printResult(result); // Evaluates signature geometry and triggers maneuvers
        } 
    } else {
        Serial.println("Fail to request objects from Huskylens!");
    }

    delay(50);
}

// --- Subrutinas Cinematics y de Tracción ---
void stop() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
}

void back() {
    analogWrite(ENA, 70);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    Serial.print("Back");
}

void forward() {
    analogWrite(ENA, carSpeed);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    Serial.print("Forward- ");
    Serial.println(middleDistance);
}

void freno() {
    analogWrite(ENA, 50);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    delay(200);
    Serial.print("Back");
}

void izquierda() {
    back();
    delay(400);
    myservo.write(125);   
    back();
    delay(1560);
    myservo.write(centroA);
    delay(1100);
}

void derecha() {
    back();
    delay(400);
    myservo.write(70); 
    delay(700);
    myservo.write(centroH);
    delay(1100);
    forward();
}

// --- Subrutinas de Rebase Óptico (Evasión de Pilares) ---
void rojoderecha() {
    myservo.write(130);
    analogWrite(ENA, carSpeedColor);
    delay(700);
    myservo.write(63);
    delay(1250);
    myservo.write(130);
    delay(600);
    myservo.write(centro);
}

void rojoizquierda() {
    myservo.write(125);
    analogWrite(ENA, carSpeedColor);
    delay(500);
    myservo.write(65);
    delay(970);
    myservo.write(130);
    delay(400);
    myservo.write(centro);
}

void verdeizquierda() {
    myservo.write(60);
    analogWrite(ENA, carSpeedColor);
    delay(700);
    myservo.write(133);
    delay(1350);
    myservo.write(70);
    delay(1000);
    myservo.write(centro);
}

void verdederecha() {
    myservo.write(70);
    analogWrite(ENA, carSpeedColor);
    delay(500);
    myservo.write(130);
    delay(620);
    myservo.write(70);
    delay(490);
    myservo.write(centro);
}

// --- Decodificador de Bloques de Visión ---
void printResult(HUSKYLENSResult result) {
    if (result.command == COMMAND_RETURN_BLOCK) {
        Serial.println(String() + F("Block:xCenter=") + result.xCenter + F(",yCenter=") + result.yCenter + F(",width=") + result.width + F(",height=") + result.height + F(",ID=") + result.ID);
        Serial.println(result.ID);
    } 
    else if (result.command == COMMAND_RETURN_ARROW) {
        Serial.println(String() + F("Arrow:xOrigin=") + result.xOrigin + F(",yOrigin=") + result.yOrigin + F(",xTarget=") + result.xTarget + F(",yTarget=") + result.yTarget + F(",ID=") + result.ID);
    }

    // --- Matriz de Decisiones de Rebase (Filtro de Umbral Proxémico) ---
    
    // PILAR ROJO - DETECCIÓN FLANCO DERECHO (ID 1, 2, 3)
    if ((result.ID == 1 || result.ID == 2 || result.ID == 3) && result.height > 90 && result.xOrigin >= 188) {
        Serial.println("------------- RED FLANK RIGHT -------------");
        rojoderecha();
        delay(winnie);
    }
    // PILAR ROJO - DETECCIÓN FLANCO IZQUIERDO (ID 1, 2, 3)
    else if ((result.ID == 1 || result.ID == 2 || result.ID == 3) && result.height > 90 && result.xOrigin < 188) {
        Serial.println("------------- RED FLANK LEFT -------------");
        rojoizquierda();
        delay(winnie);
    }
    // PILAR VERDE - DETECCIÓN FLANCO IZQUIERDO (ID 5, 6)
    else if ((result.ID == 5 || result.ID == 6) && result.height > 70 && result.xOrigin <= 135) {
        Serial.println("------------- GREEN FLANK LEFT -------------");
        verdeizquierda();
        delay(winnieV);
    }
    // PILAR VERDE - DETECCIÓN FLANCO DERECHO (ID 5, 6)
    else if ((result.ID == 5 || result.ID == 6) && result.height > 70 && result.xOrigin > 130) {
        Serial.println("------------- GREEN FLANK RIGHT -------------");
        verdederecha();
        delay(winnieV);
    }
}
