## آزمایش 3-6:
### فتوسل(PHOTOCEL)
### هدف:
#### روشن و خاموش شدن LED با استفاده از فتوسل
---
## ابزار:

|ردیف|نام|تعداد|
|----|----|----|
|1|سیم|6|
|2|فتوسل |1|
|3|مقاومت|2|
|4|برد بورد|1|
|5|ریزپردازنده|1|
|6|LED|1|


---
## شرح مختصر : سنسور فتوسل نوعی مقاومت است از نوع نوری و با تغییر شدت نور مقاومت آن تغییر می کند.
## به طوریکه اگر شدت نور بیشتر شود مقاومت فتوسل کاهش مییابد و اگر کم تر شود مقاومت فتوسل افزایش می یابد.

---


## شکل شماتیک مدار:
![](/media/photocel.jpg)

## شکل مدار :
![](/media/potocell.jpg)

---
### کد برنامه:
``` cpp int sensor;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  sensor = analogRead(A0); // meghdare sensor
  Serial.print("sensor value=");
  Serial.println(sensor);
  delay(300);
  if (sensor > 250)
  {
    digitalWrite(led, LOW);
  }
  else {
    digitalWrite(led, HIGH);
  }
}```


