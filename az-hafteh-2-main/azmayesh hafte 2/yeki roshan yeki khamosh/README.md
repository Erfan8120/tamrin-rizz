

 گزارش کار و مراحل 

هدف ما در این آزمایش راه اندازی دو LED چشمک زن می باشد به صورتی که در هر لحظه یکی از آنها روشن و دیگری خاموش باشد و به طور متناوب خلاف یکدیگر چشمک بزنند.

---
 کد های برنامه 
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
---






