#include <SoftwareSerial.h>
SoftwareSerial SIM900(6, 7); // define serial port PIN
void SIM900_Start()
{
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(9, LOW);
  delay(5000);
}
void Call_Phone()
{
  SIM900.println("ATD15812345678;"); // the numbers behind ATD is your phone number to dial.
  delay(100);
  SIM900.println("ATD15812345678;");
  delay(30000);            // wait for 30 seconds...
  SIM900.println("ATH");   // hang up
}
void setup()
{
  pinMode(9, OUTPUT); 
  SIM900.begin(19200);   //set baud rate    
  SIM900_Start();  
  delay(20000);  // wait for SIM900 to work 
}
void loop()
{
  Call_Phone();
  do
  {   
  }
  while(1);
}
