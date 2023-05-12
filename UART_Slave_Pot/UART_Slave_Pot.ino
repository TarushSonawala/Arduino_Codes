int led = 9;
int ledState;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    ledState = Serial.read();
    Serial.println(ledState);
    analogWrite(led, ledState);
    delay(10);
  }
}
