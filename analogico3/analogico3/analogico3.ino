const int potenciometerPin = A1;
const int ledPin = 6;
// the setup routine runs once when you press reset:
void setup() {
pinMode(ledPin, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {
int value = analogRead(potenciometerPin);
int brightness = value * ( 255.0 / 1023.0);
analogWrite(ledPin, brightness);
}
