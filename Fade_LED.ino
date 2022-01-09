int led=9;
int brightness=0; // how bright the LED is
int fadeAmount=5; // how many points to fade the LED by
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led,brightness); // set the brightness of pin 9
  brightness = brightness + fadeAmount; // change the brightness for next time through the loop
  if (brightness == 0 || brightness == 255) {// reverse the direction of the fading at the ends of the fade
      fadeAmount = -fadeAmount ;
   }
  delay(30);
}
