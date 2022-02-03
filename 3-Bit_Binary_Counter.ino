int led1 = 11;
int led2 = 10;
int led3 = 9;
int pushButton = 2;
int buttonState;
int count = 0;
int wait = 200;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pushButton, INPUT);

}

void loop() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  buttonState = digitalRead(pushButton);
  delay(20);

  if (buttonState == LOW) {
    //DO NOTHING
  }
  else {
    count++;
    if ((count % 2) > 0) {
      digitalWrite(led1, HIGH);
    }

    if ((count % 4) > 1) {
      digitalWrite(led2, HIGH);
    }

    if ((count % 8) > 3) {
      digitalWrite(led3, HIGH);
    }

  } delay(wait);

 
}
