
 گزارش کار و مراحل

این آزمایش نیز عملکردی دقیقا مشابه دو آزمایش قبلی دارد با این تفاوت که اینجا با اعداد سر و کار داریم یعنی به دنبال این هستیم که اگر کاربر یک عدد صحیح وارد کرد برنامه فرمان روشن شدن LED را صادر کند و بلعکس. واضح است که در اینجا باید برای نگهداری عدد ورودی از نوع داده ای <b>integer</b> استفاده کنیم. فرض می شود که عدد 101 معادل روشن و عدد 201 معادل خاموش می باشد.

---
  کد های برنامه 

const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int inputLed = Serial.parseInt();   
    if (inputLed == 101) {
      digitalWrite(led, HIGH);
    } else if (inputLed == 201) {
      digitalWrite(led, LOW);
    }
  }
}
```

---
