#define lampe 10

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 delay(6000);
  digitalWrite(lampe,HIGH); // allumé
  delay(2000);
  digitalWrite(lampe,LOW);
  delay(2000);
  
  

}
