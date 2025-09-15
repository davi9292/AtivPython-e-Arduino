int Button1State = 0;
int Button2State = 0;
int LedPin = 13;
int Button1Pin = 12;
int Button2Pin = 11;
 
void setup()
{
  pinMode(LedPin, OUTPUT);
  pinMode(Button1Pin, INPUT);
  pinMode(Button2Pin, INPUT);
}
 
void loop()
{
  Button1State = digitalRead(Button1Pin);
  Button2State = digitalRead(Button2Pin);
 
  if (Button1State == 1) {
    digitalWrite(LedPin, HIGH);
  }
  else if (Button2State == 1) {
    digitalWrite (LedPin, LOW);
  }
}