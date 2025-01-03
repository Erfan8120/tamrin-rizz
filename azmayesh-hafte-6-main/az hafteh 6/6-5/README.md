## آزمایش 5-6:
### ایجاد یک پیانوی کوچک
### هدف:
#### با استفاده از  پیزو الکترونیک و پوش باتن پیانوی کوچک با نت های مختلف باید ایجاد کرد.
---
## ابزار:

|ردیف|نام|تعداد|
|----|----|----|
|1|سیم|10|
|2|پیزو الکتریک |1|
|4|برد بورد|1|
|5|ریزپردازنده|1|
|6|پوش باتن|4|
---
## شرح مختصر: در آزمایش 4-6 خود نت ها به طور خودکار با آپلود کردن برنامه پخش می شدند،اما اینجا با استفاده از کلیدی که در نظر گرفته ایم،با هر بار فشردن هر دکمه،یک نت منحصر به فرد به صدا در می آید.
---
## شکل شماتیک مدار:
![](/media/piano.jpg)
## شکل مدار :
![](/media/pianoo.jpg)

## کد برنامه :
``` cpp
#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
const int C = 10;
const int D = 9;
const int E = 8;
const int F = 7;
const int Buzz = 11;

void setup() {
  
  {
    pinMode(C, INPUT);
    digitalWrite(C, HIGH);
  }
    {
    pinMode(D, INPUT);
    digitalWrite(D, HIGH);
  }
    {
    pinMode(E, INPUT);
    digitalWrite(E, HIGH);
  }
    {
    pinMode(F, INPUT);
    digitalWrite(F, HIGH);
  }
  
}

void loop() {

  while (digitalRead(C) == LOW)
  {
    tone(Buzz, T_C);
  }

  while (digitalRead(D) == LOW)
  {
    tone(Buzz, T_D);
  }

  while (digitalRead(E) == LOW)
  {
    tone(Buzz, T_E);
  }

  while (digitalRead(F) == LOW)
  {
    tone(Buzz, T_F);
  }
  noTone(Buzz);
}```
