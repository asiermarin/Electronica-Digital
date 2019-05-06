int incomingByte = 0; // for incoming serial data
const int pin=3;
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
      
     
        if(incomingByte==97){
          digitalWrite(pin,HIGH);
            Serial.println("encender" );
        }
        if(incomingByte==98){
          digitalWrite(pin,LOW);
            Serial.println("apagar");
        }
        
    
    }
}
