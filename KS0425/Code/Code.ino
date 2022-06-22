int BASE = 4;  // I/O pin connected to the first LED
int NUM = 3;   //the number of LED 
void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);   //set the digital I/O pin to output
   }
}

void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);    //set the digital I/O pin output to "HIGH"，gradually turn on LED
     delay(200);        //delay
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);    //set the digital I/O pin output to "LOW"，gradually turn off LED
     delay(200);        //delay
   }  
}
