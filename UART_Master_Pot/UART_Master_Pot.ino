int pot = A0;
int read = 0 ;
int bright = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {

  read = analogRead(A0);
  bright = map(read, 0, 1023, 0, 255);
  Serial.write(bright);
  delay(100);
}
