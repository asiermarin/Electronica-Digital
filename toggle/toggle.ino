// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2; // the number of the pushbutton pin
const int ledPin = 3;    // the number of the LED pin
// variables will change:
int buttonState = 0; // variable for reading the pushbutton status
int ledState = LOW;
void setup()
{
    pinMode(ledPin, OUTPUT);   // initialize the LED pin as an output
    pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
}
void loop()
{
    buttonState = digitalRead(buttonPin); // read the state of the pushbutton

    if (buttonState == HIGH)
    {
        ledState = (ledState == LOW) ? HIGH : LOW;
        digitalWrite(ledPin, ledState); // turn LED on
    }
}