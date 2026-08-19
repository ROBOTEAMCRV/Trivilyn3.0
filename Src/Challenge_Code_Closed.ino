#include <ESP32Servo.h>
#include <NewPing.h> // Biblioteca para los sensores ultrasónicos

Servo myservo; //servo control

#include "HUSKYLENS.h"

// Izquierdo: TRIG=17, ECHO=18
// Derecho:   TRIG=22, ECHO=23
#define TRIG_LEFT   17
#define ECHO_LEFT   18
#define TRIG_RIGHT  22
#define ECHO_RIGHT  23

int ID1 = 1;
int ID2 = 2;
int ID3 = 3;
int ID4 = 4;
int ID5 = 5;
int ID6 = 6;

#define HUSKY_SERIAL Serial1
#define HUSKY_RX 16
#define HUSKY_TX 4
HUSKYLENS huskylens;
void printResult(HUSKYLENSResult result);

int carSpeed = 58;
int carSpeedColor = 100;
int carSpeedCurvas = 100;
int backk = 85;
int centro = 87;
int centroA = 87;
int centroH = 87;
int contadorLecturas = 0;
int winnie = 0;
int winnieV = 0;
int pepe = 0;
int tilin = 0;
int grasa = 0;
int lewis = 0;
int lecrer = 0;
int senna = 0;
int nano = 0;

#define ENA 13
#define IN1 14
#define IN2 27

#define TRIGGER_PIN  19 
#define ECHO_PIN     21 

#define MAX_DISTANCE 400

  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
  NewPing sonarLeft(TRIG_LEFT, ECHO_LEFT, MAX_DISTANCE);
  NewPing sonarRight(TRIG_RIGHT, ECHO_RIGHT, MAX_DISTANCE);

// leftDistance y rightDistance en milímetros (ultrasónico lateral, convertido desde cm).
// middleDistance sigue en centímetros (sonar ultrasónico frontal).
int rightDistance = 0, leftDistance = 0, middleDistance = 0;


int getDistance() {
delay(50);
  Serial.print("Ping: ");
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
}

int leerUltrasonico(NewPing &sensor){
  unsigned int cm = sensor.ping_cm();
  if (cm == 0){ // 0 = fuera de rango / sin eco
    return 9999; // fuera de rango: valor alto (mm) para no disparar la lógica de esquiva
  } else {
    return cm * 10; // cm -> mm
  }
}

unsigned long ultimaEsquivaMillis = 0;
const unsigned long COOLDOWN_ESQUIVA_MS = 1500;

void stop(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
}
void back(){
  analogWrite(ENA,backk);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  Serial.print("Back");
  }

void forward(){
  analogWrite(ENA,carSpeed);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  Serial.print("Forward- ");
  Serial.println(middleDistance);
}
  void freno(){
  analogWrite(ENA,55);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(200);
  Serial.print("Back");
  }


void izquierda(){//antihorario
delay(500);
  myservo.write(centro);
        back();
      delay(500);
  myservo.write(121);
    delay(970);
    myservo.write(centroA);
    forward();
  }

void derecha(){//horario
delay(500);
  myservo.write(centro);
        back();
      delay(400);
    myservo.write(58);
    delay(1250);
         myservo.write(centroH);
    forward();
  }

   void esquivarObjetoMuyDerecha(){
    forward();
    delay(300);
  }

     void esquivarObjetoMuyIzquierda(){
    forward();
    delay(300);
  }

  void rojocentro(){
 myservo.write(123);
analogWrite(ENA,carSpeedColor);
delay(400);
myservo.write(63);
delay(800);
myservo.write(123);
delay(400);
myservo.write(centro);
  }

  void rojoderecha(){
myservo.write(121);
analogWrite(ENA,carSpeedColor);
delay(580);
myservo.write(58);
delay(1200);
myservo.write(123);
delay(550);
myservo.write(centro);
  }

    void Rojolargo(){
myservo.write(123);
analogWrite(ENA,carSpeedColor);
delay(690);
myservo.write(58);
delay(1420);
myservo.write(123);
delay(600);
myservo.write(centro);
  }

   void rojoizquierda(){
 myservo.write(123);
analogWrite(ENA,carSpeedColor);
delay(300);
myservo.write(63);
delay(800);
myservo.write(123);
delay(300);
myservo.write(centro);
  }

  void verdeizquierda(){
myservo.write(59);
analogWrite(ENA,carSpeedColor);
delay(700);
myservo.write(125);
delay(1120);
myservo.write(63);
delay(780);
myservo.write(centro);
  }

    void Verdelargo(){
myservo.write(65);
analogWrite(ENA,carSpeedColor);
delay(700);
myservo.write(120);
delay(1170);
myservo.write(63);
delay(750);
myservo.write(centro);
 stop();
 delay(500);
  }

void verdederecha(){
myservo.write(68);
analogWrite(ENA,carSpeedColor);
delay(550);
myservo.write(123);
delay(600);
myservo.write(63);
delay(500);
myservo.write(centro);
  }

  void verdecentro(){
myservo.write(68);
analogWrite(ENA,carSpeedColor);
delay(650);
myservo.write(123);
delay(700);
myservo.write(63);
delay(600);
myservo.write(centro);
  }

   void rojoderechaA(){
myservo.write(123);
analogWrite(ENA,carSpeedColor);
delay(500);
myservo.write(58);
delay(1150);
myservo.write(123);
delay(500);
myservo.write(centroA);
  }

    void RojolargoA(){
myservo.write(123);
analogWrite(ENA,carSpeedColor);
delay(650);
myservo.write(58);
delay(1420);
myservo.write(123);
delay(700);
myservo.write(centro);
      stop();
      delay(1000);
  }

   void rojoizquierdaA(){
 myservo.write(121);
analogWrite(ENA,carSpeedColor);
delay(300);
myservo.write(63);
delay(800);
myservo.write(123);
delay(350);
myservo.write(centroA);
  }

  void verdeizquierdaA(){
myservo.write(58);
analogWrite(ENA,carSpeedColor);
delay(650);
myservo.write(118);
delay(1000);
myservo.write(63);
delay(700);
myservo.write(centroA);
  } 

    void VerdelargoA(){
myservo.write(66);
analogWrite(ENA,carSpeedColor);
delay(700);
myservo.write(118); 
delay(1170);
myservo.write(63);
delay(600);
myservo.write(centroA);
         stop();
      delay(1000);
  }

void verdederechaA(){
myservo.write(68);
analogWrite(ENA,carSpeedColor);
delay(550); 
myservo.write(123);
delay(550);
myservo.write(63);
delay(500);
myservo.write(centroA);
  }


void setup() {
  Serial.begin(115200);
    HUSKY_SERIAL.begin(9600, SERIAL_8N1, HUSKY_RX, HUSKY_TX);
    while (!huskylens.begin(HUSKY_SERIAL))
    {
        Serial.println(F("Begin failed!"));
        Serial.println(F("1.Please recheck the \"Protocol Type\" in HUSKYLENS (General Settings>>Protocol Type>>Serial 9600)"));
        Serial.println(F("2.Please recheck the connection."));
        delay(100);
    }
  myservo.attach(32);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
}


void loop(){
analogWrite(ENA, carSpeed);
if (pepe==0){
  myservo.write(80);
  delay(1000);
  myservo.write(centro);
  delay(1000);
  forward(); 
  forward();
  pepe++;
}

forward();

if (pepe>12){
  delay(1);
  forward();
   myservo.write(centro);
  delay(1000);
  stop();
  delay(1000000000);
}


middleDistance = sonar.ping_cm();
leftDistance = leerUltrasonico(sonarLeft);
rightDistance = leerUltrasonico(sonarRight);

bool cooldownListo = (millis() - ultimaEsquivaMillis) > COOLDOWN_ESQUIVA_MS;
if ((middleDistance <= 7 && middleDistance > 1) && cooldownListo){
       analogWrite(ENA, 110);
Serial.println(middleDistance);

forward();
  pepe++;

  Serial.println(leftDistance);
  Serial.println(rightDistance);
   if (leftDistance < rightDistance && grasa == 0){
      tilin++;
      lecrer++;
   }
   else if (leftDistance > rightDistance && tilin == 0){
    grasa++;
    lewis++;
   }

    if (tilin > 0 && grasa == 0 && lecrer >= 0){
      derecha();
      ultimaEsquivaMillis = millis();
    }   
     else if (grasa > 0 && lewis >= 0){
    izquierda();
      senna++;
      ultimaEsquivaMillis = millis();
}
 }   
   if (leftDistance <= 390 && leftDistance > 100 && pepe > 0 ){
  myservo.write(104);
   delay(30);
    myservo.write(centro);
    }
   if(rightDistance <= 390 && rightDistance > 100 && pepe > 0){
      myservo.write(70);
    delay(30);
    myservo.write(centro);
}
delay(100);


 analogWrite(ENA, carSpeed); 
 if (pepe==0){
   myservo.write(70);
   delay(800);
   myservo.write(centro);
  pepe++;
 }

if (huskylens.request())
    {
   Serial.println("###################################");
        Serial.println(String()+F("Count of learned IDs:")+huskylens.countLearnedIDs());
        Serial.println(String()+F("frame number:")+huskylens.frameNumber());

        Serial.println("#######");
        Serial.println(String()+F("Get all blocks and arrows. Count:")+huskylens.count());
        for (int i = 0; i < huskylens.count(); i++)
        {
            HUSKYLENSResult result = huskylens.get(i);
            printResult(result);
        }
    }
    else{
        Serial.println("Fail to request objects from Huskylens!");
    }

delay(50);
}

void printResult(HUSKYLENSResult result){
    if (result.command == COMMAND_RETURN_BLOCK){//result is a block
        Serial.println(String()+F("Block:xCenter=")+result.xCenter+F(",yCenter=")+result.yCenter+F(",width=")+result.width+F(",height=")+result.height+F(",ID=")+result.ID);
        Serial.println(result.ID);
    }
    else if (result.command == COMMAND_RETURN_ARROW){//result is an arrow
        Serial.println(String()+F("Arrow:xOrigin=")+result.xOrigin+F(",yOrigin=")+result.yOrigin+F(",xTarget=")+result.xTarget+F(",yTarget=")+result.yTarget+F(",ID=")+result.ID);
    }

  //FLANCO DERECHO
    if (result.ID == 1 && result.height>57 && result.xOrigin >= 160 && result.xOrigin <270 && senna <= 0) {
        Serial.println("-------------red -----------");//avoid for right
      rojoderecha();
          delay(winnie);
  }


    //FLANCO DERECHO
     else if (result.ID == 2 && result.height>57 && result.xOrigin >= 160 && result.xOrigin <270 && senna <= 0) {
        Serial.println("-------------red -----------");//avoid for right
      rojoderecha();
          delay(winnie);
  }  

     //FLANCO DERECHO
     else if (result.ID == 3 && result.height>57 && result.xOrigin >= 160 && result.xOrigin <270 && senna <= 0) {
        Serial.println("-------------red -----------");//avoid for right
      rojoderecha();
          delay(winnie);
  }  
  //Largo Largo 
  if (result.ID == 1 && result.height>62 && result.xOrigin > 270 && senna <= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
        Rojolargo();
}
if (result.ID == 2 && result.height>62 && result.xOrigin > 270 && senna <= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    Rojolargo();
}
if (result.ID == 3 && result.height>62 && result.xOrigin > 270 && senna <= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
        Rojolargo();
}


 
//FLANCO IZQUIERDA
  else if (result.ID == 1 && result.height>70 && result.xOrigin >20 && result.xOrigin < 160  && senna <= 0){
    Serial.println("------------- low red -----------");//avoid less for right izquierda
      rojoizquierda();
          delay(winnie);
  }

  //FLANCO IZQUIERDA
  else if (result.ID == 2 && result.height>70 && result.xOrigin >20 && result.xOrigin < 160 && senna <= 0){
    Serial.println("------------- low led red -----------");//avoid less for right
      rojoizquierda();
          delay(winnie);
  }
  else if (result.ID == 3 && result.height>70 && result.xOrigin >20 && result.xOrigin < 160 && senna <= 0) {
    Serial.println("------------- low red -----------");//avoid less for right izquierda
      rojoizquierda();
          delay(winnie);
  }
// Si detecta el ID 1 (Rojo) O el ID 5 (Verde) Y está muy a la izquierda (X < 80)
if (result.ID == 1 && result.height>70 && result.xOrigin >0 && result.xOrigin < 20 && senna <= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
   esquivarObjetoMuyIzquierda();
}
if (result.ID == 3 && result.height>70 && result.xOrigin >0 && result.xOrigin < 20 && senna <= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    esquivarObjetoMuyIzquierda();
}
if (result.ID == 2 && result.height>70 && result.xOrigin >0 && result.xOrigin < 30 && senna <= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
   esquivarObjetoMuyIzquierda();
}

//VERDE IZQUIERDA
  else if (result.ID == 4 && result.height>50 && result.xOrigin >50 && result.xOrigin < 160 && senna <= 0){
    Serial.println("-------------green with LED-----------"); //avoid for left
     verdeizquierda();
          delay(winnieV);
  }

  //VERDE IZQUIERDA
  else if (result.ID == 5 && result.height>50 && result.xOrigin >50 && result.xOrigin < 160 && senna <= 0){
    Serial.println("-------------green with LED-----------"); //avoid for left
     verdeizquierda();
          delay(winnieV);
  }

//VERDE IZQUIERDA
  else if (result.ID == 6  && result.height>50 && result.xOrigin >50 && result.xOrigin < 160 && senna <= 0){//izquierdo
    Serial.println("-------------green-----------"); //avoid for left
    verdeizquierda();
       delay(winnieV);
  }


   //VERDE DERECHA
   else if (result.ID == 4 && result.height>70 && result.xOrigin >= 160 && result.xOrigin <290 && senna <= 0){//flanco derecho
    Serial.println("------------- low green with LED -----------"); //avoid less for left
    verdederecha();
          delay(winnieV);
   }
   //VERDE DERECHA
   else if (result.ID == 5 && result.height>70 && result.xOrigin >= 160 && result.xOrigin <290 && senna <= 0){//flanco derecho
    Serial.println("------------- low green with LED -----------"); //avoid less for left
    verdederecha();
          delay(winnieV);
   }


   //VERDE DERECHAA
   else if (result.ID == 6 && result.height>70 && result.xOrigin >= 160 && result.xOrigin <290 && senna <= 0){
  Serial.println("------------- low green -----------"); //avoid less for left
    verdederecha();
          delay(winnieV);
   }
//CORTO CORTO
if (result.ID == 4 && result.height>70 && result.xOrigin > 290 && senna <= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    esquivarObjetoMuyDerecha();
}
if (result.ID == 5 && result.height>70 && result.xOrigin > 290 && senna <= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    esquivarObjetoMuyDerecha();
}
if (result.ID == 6 && result.height>50 && result.xOrigin > 290 && senna <= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    esquivarObjetoMuyDerecha();
}
// Largo Largo
if (result.ID == 4 && result.height>54 && result.xOrigin > 1 && result.xOrigin < 50 && senna <= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    Verdelargo();
}
if (result.ID == 5 && result.height>54 && result.xOrigin > 1 && result.xOrigin < 50 && senna <= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    Verdelargo();
}
if (result.ID == 6 && result.height>54 && result.xOrigin > 1 && result.xOrigin < 50 && senna <= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    Verdelargo();
 }

 //Antihorario

 //ID1, ID4 DETECCION ROJO
    if (result.ID == 1 && result.height>52 && result.xOrigin >= 160 && result.xOrigin <280  && grasa > 0 && lewis >= 0) {
        Serial.println("-------------red -----------");//avoid for right
      rojoderechaA();
          delay(winnie);
  }


    //FLANCO DERECHO
     else if (result.ID == 2 && result.height>52 && result.xOrigin >= 160 && result.xOrigin <280  && grasa > 0 && lewis >= 0) {
        Serial.println("-------------red -----------");//avoid for right
      rojoderechaA();
          delay(winnie);
  }  

     //FLANCO DERECHO
     else if (result.ID == 3 && result.height>52 && result.xOrigin >= 160 && result.xOrigin <280  && grasa > 0 && lewis >= 0) {
        Serial.println("-------------red -----------");//avoid for right
      rojoderechaA();
          delay(winnie);
  }  
  //Largo Largo 
  if (result.ID == 1 && result.height>70 && result.xOrigin > 280  && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
        RojolargoA();
}
if (result.ID == 2 && result.height>70 && result.xOrigin > 280  && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    RojolargoA();
}
if (result.ID == 3 && result.height>70 && result.xOrigin > 280  && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
        RojolargoA();
}
//VERDE IZQUIERDA
  else if (result.ID == 4 && result.height>50 && result.xOrigin >50 && result.xOrigin < 160 && grasa > 0 && lewis >= 0){
    Serial.println("-------------green with LED-----------"); //avoid for left
     verdeizquierda();
          delay(winnieV);
  }

  //VERDE IZQUIERDA
  else if (result.ID == 5 && result.height>50 && result.xOrigin >50 && result.xOrigin < 160 && grasa > 0 && lewis >= 0){
    Serial.println("-------------green with LED-----------"); //avoid for left
     verdeizquierda();
          delay(winnieV);
  }

//VERDE IZQUIERDA
  else if (result.ID == 6  && result.height>50 && result.xOrigin >50 && result.xOrigin < 160 && grasa > 0 && lewis >= 0){//izquierdo
    Serial.println("-------------green-----------"); //avoid for left
    verdeizquierda();
       delay(winnieV);
  }


   //VERDE DERECHA
   else if (result.ID == 4 && result.height>70 && result.xOrigin >= 160 && result.xOrigin <290 && grasa > 0 && lewis >= 0){//flanco derecho
    Serial.println("------------- low green with LED -----------"); //avoid less for left
    verdederecha();
          delay(winnieV);
   }
   //VERDE DERECHA
   else if (result.ID == 5 && result.height>70 && result.xOrigin >= 160 && result.xOrigin <290 && grasa > 0 && lewis >= 0){//flanco derecho
    Serial.println("------------- low green with LED -----------"); //avoid less for left
    verdederecha();
          delay(winnieV);
   }


   //VERDE DERECHAA
   else if (result.ID == 6 && result.height>70 && result.xOrigin >= 160 && result.xOrigin <290 && grasa > 0 && lewis >= 0){
  Serial.println("------------- low green -----------"); //avoid less for left
    verdederecha();
          delay(winnieV);
   }
//CORTO CORTO
if (result.ID == 4 && result.height>70 && result.xOrigin > 290 && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    esquivarObjetoMuyDerecha();
}
if (result.ID == 5 && result.height>70 && result.xOrigin > 290 && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    esquivarObjetoMuyDerecha();
}
if (result.ID == 6 && result.height>50 && result.xOrigin > 290 && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema derecha. X: ");
    Serial.println(result.xCenter);
    
    esquivarObjetoMuyDerecha();
}
// Largo Largo
if (result.ID == 4 && result.height>54 && result.xOrigin > 1 && result.xOrigin < 50 && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    Verdelargo();
}
if (result.ID == 5 && result.height>54 && result.xOrigin > 1 && result.xOrigin < 50 && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    Verdelargo();
}
if (result.ID == 6 && result.height>54 && result.xOrigin > 1 && result.xOrigin < 50 && grasa > 0 && lewis >= 0) {
    Serial.print("Color detectado en la extrema izquierda. X: ");
    Serial.println(result.xCenter);
    Verdelargo();
 }

}
