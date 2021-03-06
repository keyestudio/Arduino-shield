/*
  Liquid Crystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The Liquid Crystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 8
 * LCD Enable pin to digital pin 9
 * LCD D4 pin to digital pin 4
 * LCD D5 pin to digital pin 5
 * LCD D6 pin to digital pin 6
 * LCD D7 pin to digital pin 7
 * Button pin to analog pin A0
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  // Print a message to the LCD.
  lcd.print("Hello,keyestudio");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  int val=analogRead(A0);
  Serial.println(val);
  if(val>=0&&val<=50)
  {
    lcd.setCursor(5,1);
    lcd.print("R");
  }
  else if(val>=50&&val<=150)
  {
    lcd.setCursor(5,1);
    lcd.print("U");
  }
  else if(val>=150&&val<=300)
  {
    lcd.setCursor(5,1);
    lcd.print("D");
  }
  else if(val>=300&&val<=500)
  {
    lcd.setCursor(5,1);
    lcd.print("L");
  }
  else if(val>=500&&val<=750)
  {
    lcd.setCursor(5,1);
    lcd.print("S");
  }
}
