VOID SETUP(){
Serial.begin(9600);
Serial.println("type the calculation:");
}

void laap(){
while(Serial.available()>0){
float num1=Serial.parseInt();
char s=Serial.read();
float num2=Serial.parseInt();
switch(s){

case '+';
Serial.println(num1+num2);
break;

case '-';
Serial.println(num1-num2);
break;



case '*';
Serial.println(num1*num2);
break;




case '/';
Serial.println(num1/num2);
break;
