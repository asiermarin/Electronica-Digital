int counter = 0; // the value of the counter
void setup()
{
    Serial.begin(9600); // initialize serial port
}
void loop()
{
    Serial.println(counter); // send counter value over serial port
    counter++;               // increment counter value
    delay(1000);             // delay 1 second
}