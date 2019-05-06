int counter = 0;

int division = 0;
// the value of the counter
void setup()
{
    Serial.begin(9600); // initialize serial port
}
void loop()
{
    Serial.println(division);
    if (counter % 3 == 0)
    {
        division = counter / 3;
    }
    counter++; // increment counter value

    delay(1000); // delay 1 second
}