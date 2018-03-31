int tDelay = 1000;
int ledPin = 13; 

void setup(){
  pinMode(ledPin, OUTPUT);
}
void loop(){
  digitalWrite(ledPin, HIGH);
  delay(tDelay);
  digitalWrite(ledPin, LOW);
  delay(tDelay);
}
