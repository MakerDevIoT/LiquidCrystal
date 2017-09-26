#include <LiquidCrystal.h>  //ประกาศLibrary
// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(12, 11, 4, 5, 6, 7);  //ฟังก์ชั่นแรกกำหนดPins ที่ใช้ในการเชื่อมต่อ
LiquidCrystal lcd(4, 5, 2, 14, 12, 13);
void setup()
{
// set up the LCD's number of columns and rows:
  lcd.begin(16, 2);                             //กำหนดขนาดของจอ columns และ rows
// Print a message to the LCD.
  lcd.print("Hello !!!");                       //กำหนดข้อความที่ต้องการแสดงผล
  lcd.setCursor(0, 1);                          //กำหนดตำแหน่ง Cursor
  lcd.print("ESP8266");                    //กำหนดข้อความที่ต้องการแสดงผล
}
void loop()
{
}
