## آزمایش 4-6:
### تولید چندین نت با استفاده از پیزو
### هدف:
#### پخش مجموعه ی از نت های موسیقی با استفاده از پیزو
---
## ابزار:

|ردیف|نام|تعداد|
|----|----|----|
|1|سیم|2|
|2|پیزو ابکتریک |1|
|4|برد بورد|1|
|5|ریزپردازنده|1|


---
## شرح مختصر : بوسیله ی پیزو الکتریک میتوان صدایی با فرکانس های مختلف ایجاد کرد.به گونه ای که طبق برنامه ای که آپلود کردیم،با هر بار آپلود موسیقی پیش فرضی پخش می شود.

---

## شکل شماتیک مدار:
![](/media/speaker.jpg)


## کد برنامه :
``` cpp
#include "pitches.h"
// notes in the melody:
int melody[] = {
NOTE_C4, NOTE_G3,NOTE_G3, NOTE_GS3, NOTE_G3,0, NOTE_B3, NOTE_C4};
// note durations: 4 = quarter note, 8 = eighth note, etc.:

int noteDurations[] = {
4, 8, 8, 4,4,4,4,4 
};

void setup() {
// iterate over the notes of the melody:
for (int thisNote = 0; thisNote < 8; thisNote++) {
// to calculate the note duration, take one second
// divided by the note type.
//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
int noteDuration = 1000/noteDurations[thisNote];
tone(8, melody[thisNote],noteDuration);
//pause for the note's duration plus 30 ms:
delay(noteDuration +30);
}
}

void loop() {
// no need to repeat the melody.
}```
