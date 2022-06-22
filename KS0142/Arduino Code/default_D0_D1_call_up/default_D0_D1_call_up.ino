void setup()
{
  pinMode(13, OUTPUT);   
  pinMode(9, OUTPUT); //D9 is SIM900 turn on pin
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(15000);
  Serial.begin(9600);
}
 
void loop()
{
  Serial.print("ATD15812345678;\r");//15812345678 your dialing phone number
  delay(100000);
//  Serial.println("ATH");
  delay(200000);
}
