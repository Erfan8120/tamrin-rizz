int sequence[][7] = {
  {1, 1, 1, 0, 1, 1, 1}, //a
  {1, 0, 0, 1, 1, 1, 0}, //c
  {1, 0, 0, 1, 1, 1, 1}, //e
  {1, 0, 0, 0, 1, 1, 1}, //f
  {0, 1, 1, 0, 1, 1, 1}, //h
  {0, 0, 0, 1, 1, 1, 0}, //l
  {1, 1, 0, 0, 1, 1, 1}, //p
 
};
void printNumber(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(1 + i, sequence[number][i]);
  }
}
void setup() {
  for (int i = 1; i < 8; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++)
  {
    printNumber(i);
    delay(1000);
  }

}
