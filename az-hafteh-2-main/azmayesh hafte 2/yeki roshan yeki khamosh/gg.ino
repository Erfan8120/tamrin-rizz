int led7=13;
int lad8=10;


void setup() {
  pinMode(led7,OUTPUT);
pinMode(lad8,OUTPUT);

}




void loop() {
  
 digitalWrite(led7,HiGH);
 digitalWrite(lad8,LOW);

delay(5000);

digitalWrite(led7,HiGH);
 digitalWrite(lad8,LOW);
delay(5000);


}