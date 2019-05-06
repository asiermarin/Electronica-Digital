int counter = 0;
int counter2 = 0;
int resta = 0;
// the value of the counter
void setup()
{
    Serial.begin(9600); // initialize serial port
}
void loop()
{
    Serial.println(resta);
    if (counter % 3 == 0)
    {
        resta = counter - counter2;
    }
    counter++; // increment counter value
    counter2--;
    delay(1000); // delay 1 second
}