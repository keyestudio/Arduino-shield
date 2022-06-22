int BASE = 4 ;  //The first relay is connected to the I / O port
int NUM = 4;   //Total number of relays

void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   //Set the number I/O port to outputs
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);    //Set the number I/O port outputs to "low", that is, gradually turn off the relay.
     delay(200);        //delay 0.2S
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);    //Set the number I/O port outputs to "high", that is, gradually turn on relay.
     delay(200);        //delay 0.2S
   }  
}
