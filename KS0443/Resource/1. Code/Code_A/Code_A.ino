#include <SPI.h>
#include <Ethernet55.h>

// set MAC address 
#if defined(WIZ550io_WITH_MACADDRESS)
#else
byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
#endif  

void setup() 
{  
  Serial.begin(9600);
  if (Ethernet.begin(mac) == 0) 
  {
      Serial.println("Failed to configure Ethernet using DHCP");
      // connection fails, stop program run. 
      for(;;);
  }

  // print out your local IP address
  Serial.print("My IP address: ");
  for (byte thisByte = 0; thisByte < 4; thisByte++) 
  {
    // print out four byte IP address
    Serial.print(Ethernet.localIP()[thisByte], DEC);
    Serial.print("."); 
  }

  Serial.println();
}

void loop() 
{
}
