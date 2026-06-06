#include <NewPing.h> // Biblioteca para el sensor ultrasónico
#include <Servo.h> // Biblioteca para el servo
Servo myservo; // Crea un objeto servo para controlar el servo

int centro = 97;
int centroA =98;
int centroH = 96;
int carSpeed = 65;
int carSpeedCurvas = 90;

//--------------- driver
#define ENA 5
#define IN1 8
#define IN2 7

//--------------- Ultrasonics
#define TRIGGER_PIN  A0  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     A1  // Arduino pin tied to echo pin on the ultrasonic sensor.

#define TRIGGER_PIN2  A2  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN2 A3  // Arduino pin tied to echo pin on the ultrasonic sensor.

#define TRIGGER_PIN3  A4  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN3 A5  // Arduino pin tied to echo pin on the ultrasonic sensor.

#define MAX_DISTANCE 400 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);// NewPing setup of pins and maximum distance.
  NewPing lsonar(TRIGGER_PIN2, ECHO_PIN2, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
  NewPing Rsonar(TRIGGER_PIN3, ECHO_PIN3, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int rightDistance = 0, leftDistance = 0, middleDistance = 0;


void forward(){

  digitalWrite(IN1,HIGH); //set IN1 hight level
  digitalWrite(IN2,LOW);  //set IN2 low level
  Serial.print("Forward- ");//send message to serial monitor
  Serial.println(middleDistance);
}


//void back(){
//digitalWrite(ENA,HIGH);
//digitalWrite(IN1,LOW);
//digitalWrite(IN2,HIGH);
//Serial.print("B ");
//}
  void freno(){
  analogWrite(ENA,50);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  }

void stop(){
  digitalWrite(IN1,LOW); //set IN1 hight level
  digitalWrite(IN2,LOW);  //set IN2 low level
}

void izquierda(){//antihorario
  myservo.write(60);   //  Cerca, ángulo 0
  analogWrite(ENA,carSpeedCurvas);
    delay(680);
    myservo.write(centroA);
  }

void derecha(){//horario
    myservo.write(140); //  Cerca, ángulo 0
    analogWrite(ENA,carSpeedCurvas);
    delay(465);
         myservo.write(centroH);
  }


void setup() {
  Serial.begin(9600);

  myservo.attach(3);
  pinMode(IN1,OUTPUT);//before useing io pin, pin mode must be set first
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  //pin sentido
 // pinMode(41, INPUT);
  //pinMode(40, OUTPUT);
  //digitalWrite (40, HIGH);
}       
int pepe = 0;
int tilin = 0;
int grasa = 0;
int lewis = 0;
int lecrer = 0;
void loop(){

analogWrite(ENA, carSpeed);
if (pepe==0){
  myservo.write(75);
  delay(1175);
  myservo.write(centro);
 // stop();
  
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
  delay(1600);
  stop();
  delay(1000000000);
}


middleDistance = sonar.ping_cm();
leftDistance = lsonar.ping_cm();
rightDistance = Rsonar.ping_cm();

if (middleDistance <= 32 && middleDistance > 20){
Serial.println(middleDistance);
forward();
  pepe++;

 
  Serial.println(leftDistance);
  Serial.println(rightDistance);

   //  if leftdistance > 50 = clockwise       
  //if (leftDistance <= 80 && leftDistance > 1){
    //if (d>igitalRead(41)){
   if (leftDistance <= rightDistance && grasa == 0){
      tilin++;
      lecrer++;
   }
   else if (leftDistance > rightDistance && tilin == 0){
    grasa++;
    lewis++;
   }

    if (tilin > 0 && grasa == 0 && lecrer >= 0){

      derecha();


    }

//sin pin antihorario    
 else if (grasa > 0 && lewis >= 0){
   
  izquierda();
}
 }   
   if (leftDistance <= 9 && leftDistance > 1 && pepe > 0 ){
  myservo.write(120);   //  Cerca, ángulo 0
   delay(30);
    myservo.write(centroH);
    }
   if(rightDistance <= 9 && rightDistance > 1 && pepe > 0){
     myservo.write(70);   //  Cerca, ángulo 0
    delay(30);
    myservo.write(centroA);
}
delay(100);


}
