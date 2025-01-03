

 گزارش کار 

در این جا می خواهیم حالتی را پیاده کنیم که هر بار با فشار دادن کلید، یکی از لامپ های LED به طور تصادفی روشن شود. بنابراین باید از ساز و کار های تولید عدد رندوم استفاده کنیم.

---



```cpp
#define key1 digitalRead(A0)
int btn = A0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);  
  for (int i = 8; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
  randomSeed(analogRead(btn));  
}

void loop() {
  if (key1 == 0) {
    for (int i = 8; i < 14; i++) {
      digitalWrite(i, LOW);     
    }
    int randomNum = random(8, 14);  
    digitalWrite(randomNum, HIGH);
    Serial.println(randomNum-7);
    delay(500);
  }
}
```

---

