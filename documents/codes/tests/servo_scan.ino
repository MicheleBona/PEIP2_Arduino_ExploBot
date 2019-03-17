#include<Servo.h>

#define cmdServo 9 //PB1
#define pot 0 //PC0
#define echo 8 //PB0
#define trig 7 //PD7

Servo servo;

int angle; //angle donné en paramètre au servomoteur

bool ok=true;//test scan unique

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
  //angle=map(analogRead(pot),0,1023,0,145); //le potentomiètre va indiquer l'angle du servomoteur
  //servo.write(angle);
if(ok){
  ok=false;
  for(int i=0; i<100; i++){ //on fait varier l'angle de 0 à 100 et on récupère la distance à chaque angle
    
    servo.write(i); 
    
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig,LOW);
    float val=pulseIn(echo,HIGH,500000);
    
    Serial.println(val*0.017);
    delay(100); 
  }
}
servo.write(0);
  
}
