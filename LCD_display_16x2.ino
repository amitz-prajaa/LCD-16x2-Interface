#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 6, 10, 12, 14, 16);   // RS , EN  , D4 , D5 , D6 , D7 

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}
  
void loop() {
//   Print a message to the LCD.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Hello Everyone!");
  delay(500);


  lcd.setCursor(0,1);
  lcd.print("This is bca_man..");
  delay(1000);

  lcd.clear();
}
