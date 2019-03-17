#define ENA 6
#define ENB 16
#define IN1 12
#define IN2 13
#define IN3 14
#define IN4 15

void setup() {
  // put your setup code here, to run once:
   pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);

  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);

 
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ENA,255);
  analogWrite(ENB,255);
}
