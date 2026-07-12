#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int solarPin = A3;
const int threshold = 500;

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("LiFi Receiver");
  delay(2000);
  lcd.clear();
}

void loop() {
  int lightValue = analogRead(solarPin);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Light:");
  lcd.print(lightValue);

  lcd.setCursor(0, 1);

  if (lightValue > threshold) {
    lcd.print("LED ON");
  } else {
    lcd.print("LED OFF");
  }

  delay(200);
}
