int led = 9;
int ledState = LOW;
unsigned long previousMillis = 0;

void setup()
{
  pinMode(led, OUTPUT);

}

void loop()
{

  unsigned long currentMillis = millis();

  if ( currentMillis - previousMillis >= 200) {
    previousMillis = currentMillis;

          if (ledState == LOW) {
            ledState = HIGH;
          } else {
            ledState = LOW;
          }

    digitalWrite(led, ledState);

  }
}
