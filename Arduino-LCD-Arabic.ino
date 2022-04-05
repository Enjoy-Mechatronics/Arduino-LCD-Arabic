#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16,2);

byte ra[] = {
  B00000,
  B00000,
  B00000,
  B00001,
  B00001,
  B00010,
  B01100,
  B10000
};

byte ma[] = {
  B00000,
  B00000,
  B00111,
  B00101,
  B11111,
  B00000,
  B00000,
  B00000
};

byte da[] = {
  B00110,
  B00000,
  B00110,
  B01001,
  B11111,
  B00000,
  B00000,
  B00000
};

byte aa[] = {
  B01000,
  B01000,
  B01000,
  B01000,
  B01111,
  B00000,
  B00000,
  B00000
};

byte nn[] = {
  B00000,
  B00000,
  B00000,
  B00100,
  B10001,
  B10001,
  B01110,
  B00000
};

byte ba[] = {
  B00000,
  B00000,
  B00001,
  B00001,
  B11111,
  B00000,
  B00010,
  B00000
};

byte ka[] = {
  B00001,
  B00010,
  B00100,
  B00010,
  B10001,
  B01111,
  B00000,
  B00000
};
void setup ()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.createChar(0, ra);
  lcd.createChar(1, ma);
  lcd.createChar(2, da);
  lcd.createChar(3, aa);
  lcd.createChar(4, nn);
  lcd.createChar(5, ba);
  lcd.createChar(6, ka);

  lcd.setCursor(15,0);
  lcd.write(0);

  lcd.setCursor(14,0);
  lcd.write(1);

  lcd.setCursor(13,0);
  lcd.write(2);

  lcd.setCursor(12,0);
  lcd.write(3);

  lcd.setCursor(11,0);
  lcd.write(4);

  lcd.setCursor(9,0);
  lcd.write(1);

  lcd.setCursor(8,0);
  lcd.write(5);

  lcd.setCursor(7,0);
  lcd.write(3);

  lcd.setCursor(6,0);
  lcd.write(0);

  lcd.setCursor(5,0);
  lcd.write(6);
}

void loop ()
{
  
}
