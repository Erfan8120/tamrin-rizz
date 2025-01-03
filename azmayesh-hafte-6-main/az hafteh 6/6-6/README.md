## آزمایش 6-6:
### اندازه گیری دما و رطوبت با DHT11
### هدف:
#### در این آزمایش با استفاده از DHT11 می خواهیم دما و رطوبت محیط را بسنجیم و و دو پارامتر دما و رطوبت را در سریال مانیتور نمایش دهیم.
---
## ابزار:

|ردیف|نام|تعداد|
|----|----|----|
|1|سیم|8|
|2|DHT11 |1|
|3|مقاومت|3|
|4|برد بورد|1|
|5|ریزپردازنده|1|
|6|LED|2|


---
## شرح مختصر : با استفاده از دو LED که نقش کولر و هیتر را دارند و به پایه های مربوطه ی آردوینو متصل اند،وشرط لازم در کدی که نوشته ایم با توجه به دما و رطوبت محیط LED ها روشن می شوند.به گونه ای که اگر دما از حدی بالاتر رفت،LED1 (کولر)روشن شود و اگر دما از حدی پایین تر رفت ،LED2 (هیتر)روشن شود.

---


## عملکرد مدار :
![](/media/TEMPGIF.gif)

## شکل شماتیک مدار:
![](/media/TEMP.jpg)

## شکل مدار :
![](/media/temp.jpg)




### کد برنامه :
``` cpp
#include <DHT.h>
#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int cooler = 6;
int heater = 7;

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 test!");
  dht.begin();
  pinMode(cooler, OUTPUT);
  pinMode(heater, OUTPUT);

}
void loop() {
  float humid = dht.readHumidity ();
  float temp = dht.readTemperature();
  Serial.print("humidity:  ");
  Serial.print(humid);
  Serial.println("%");
  delay(500);
  Serial.print("Temperature:  ");
  Serial.print(temp);
  Serial.println("*C");
  delay(500);
  if (temp > 28)
  {
    digitalWrite(cooler, HIGH);
    digitalWrite(heater, LOW);
  }
  if (temp < 20)
  { digitalWrite(heater, HIGH);
    digitalWrite(cooler, LOW);
  }

}```
