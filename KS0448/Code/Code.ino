const int EAPin = 3;
const int MAPin = 6;
const int EBPin = 4;
const int MBPin = 5;
const int ECPin = 7;
const int MCPin = 10;
const int EDPin = 8;
const int MDPin = 9;

void setup() 
{
  pinMode(EAPin,OUTPUT);
  pinMode(MAPin,OUTPUT);
  pinMode(EBPin,OUTPUT);
  pinMode(MAPin,OUTPUT);
  pinMode(ECPin,OUTPUT);
  pinMode(MAPin,OUTPUT);
  pinMode(EDPin,OUTPUT);
  pinMode(MAPin,OUTPUT);

}

void loop() 
{
  digitalWrite(EAPin,HIGH);
  analogWrite(MAPin,100);  
  digitalWrite(EBPin,HIGH);
  analogWrite(MBPin,100);
  digitalWrite(ECPin,HIGH);
  analogWrite(MCPin,100);
  digitalWrite(EDPin,HIGH);
  analogWrite(MDPin,100);
  delay(2000);
  analogWrite(MAPin,0);
  analogWrite(MBPin,0);
  analogWrite(MCPin,0);
  analogWrite(MDPin,0);
  delay(1000);
  digitalWrite(EAPin,LOW);
  analogWrite(MAPin,100); 
  digitalWrite(EBPin,LOW);
  analogWrite(MBPin,100);
  digitalWrite(ECPin,LOW);
  analogWrite(MCPin,100);
  digitalWrite(EDPin,LOW);
  analogWrite(MDPin,100);
  delay(2000);
  analogWrite(MAPin,0);
  analogWrite(MBPin,0);
  analogWrite(MCPin,0);
  analogWrite(MDPin,0);
  delay(1000); 
}
