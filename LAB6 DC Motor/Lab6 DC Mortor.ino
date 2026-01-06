
/* 6.1 */

//https://app.cirkitdesigner.com/project/4bea5b09-43fc-4e89-999b-9805c3f90d5a
#define motorPin 9

void setup() {
  // put your setup code here, to run once:
 pinMode(motorPin,OUTPUT);



}

void loop() {
  digitalWrite(motorPin,1);
  delay(2000);
  digitalWrite(motorPin,0);
  delay(2000);
}
