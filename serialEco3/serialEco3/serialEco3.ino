int incomingByte = 0; // for incoming serial data
const pin=2;
void setup()
{
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}
void loop()
{
    // send data only when you receive data:
    if (Serial.available() > 0)
    {
        // read the incoming byte:
        incomingByte = Serial.read();
        // say what you got:
        Serial.print("He recibido: ");
        if(incomingByte==65){
          Serial.println("Quiero otra A");
        }
        if(incomingByte==48){
          digitalWrite(pin,HIGH);
        }
        if(incomingByte==49){
          digitalWrite(pin,LOW);
        }
    
    }
}
