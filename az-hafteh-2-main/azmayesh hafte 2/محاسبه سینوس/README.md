

 گزارش کار و مراحل 

در این آزمایش هدف ما نمایش گرافیکی داده های خروجی می باشد که برای این کار برنامه ما به طور مکرر مقادیر سینوس و کسینوس را محاسبه کرده و داده های خروجی را بر روی <b>Serial Plotter</b> به شکل یک نمودار نمایش می دهیم. 

---

  کد های برنامه 

```cpp
#include <math.h>   // استفاده از کتابخانه math برای داشتن متد های سینوس و کسینوس
const int numPoints = 360;  // حداکثر زاویه بر حسب درجه
const float amplitude = 100;
const float offset = 512;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < numPoints; i++) {   // شروع از زاویه با درجه 1 تا درجه 360
    float radians = i * (PI / 180);     // تبدیل درجه به رادیان
    float sineValue = amplitude * sin(radians) + offset;    // محاسبه نمودار سینوس
    float cosValue = amplitude * cos(radians) + offset;    // محاسبه نمودار کسینوس
    Serial.print(sineValue);
    Serial.print(",");  // ایجاد یک فاصله بر روی دو نمودار تا با یکدیگر برخورد نداشته باشند
    Serial.println(cosValue);
    delay(10);  // هر 0.01 ثانیه به مقادیر نمودار اضافه می شود
    }
}
```
