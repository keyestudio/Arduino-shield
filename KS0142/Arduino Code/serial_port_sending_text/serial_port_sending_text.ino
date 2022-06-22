  void sendMeg()
  {
  Serial.println("AT");
  delay(2000);
  Serial.println("AT+CMGF=1");
  delay(2000);
  Serial.println("AT+CMGS=\"15812345678\"");//change into your phone number
  delay(2000);
  Serial.print("ABCDEFGHIJKLMN\r\n");//write the content here
  delay(2000);
  Serial.write(0x1A);  
 }
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(15*1000);
  sendMeg();
}
