int sensor;
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
}
