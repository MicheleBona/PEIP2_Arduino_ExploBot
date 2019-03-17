#include<Servo.h>

#define cmdServo 9 //PB1 angles relevés: 0 55 110
#define pot 0 //PC0
#define echo 8 //PB0
#define trig 7 //PD7

Servo servo;

int angle; //angle donné en paramètre au servomoteur

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  servo.attach(cmdServo);

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //partie servo
  angle=map(analogRead(pot),0,1023,0,110); //le potentomiètre va indiquer l'angle du servomoteur
  servo.write(angle);
  Serial.println(angle);

  //partie capteur 
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  float val=pulseIn(echo,HIGH,500000);

  //Serial.println(val);
}
