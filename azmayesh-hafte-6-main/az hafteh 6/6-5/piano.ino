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
}
