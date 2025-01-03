
 گزارش کار 

در این آزمایش هدف ما تنظیم شدت روشنایی لامپ LED به صورت داینامیک و در لحظه می باشد. برای این کار از یک پتانسیومتر ( Potentiometer ) که نوعی مقاومت متغیر است استفاده می کنیم. در واقع پتانسیومتر با چرخش ولوم آن بین ولتاژ 0 تا 5 ولت جا به جا می شویم. بنابراین واضح است که می توان این ولتاژ متغیر را به یک ورودی آنالوگ از آردوینو داد و بر این اساس آن را به خروجی برای LED تنظیم کرد.

---



```cpp
int led = 10;
int val = 0;   

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 val = analogRead(A0); 
 int hashVal = map(val, 0, 1023, 0, 255);   
 analogWrite(led, hashVal);
 int voltVal = map(val, 0, 1023, 0, 5); 
   Serial.println(voltVal);
   delay(2000);
}
```

---
