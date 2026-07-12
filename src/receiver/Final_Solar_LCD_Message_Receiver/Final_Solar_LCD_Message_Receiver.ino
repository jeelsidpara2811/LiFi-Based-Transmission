#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int solarPin = A3;
const int threshold = 500;
const int bitDelay = 200;

String receivedMessage = "";

void showReady() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hey! Ready to");
  lcd.setCursor(0, 1);
  lcd.print("receive msg...");
}

int readBit() {
  int value = analogRead(solarPin);
  return value > threshold ? 1 : 0;
}

char readChar() {
  char c = 0;

  for (int i = 7; i >= 0; i--) {
    delay(bitDelay);
    int bitValue = readBit();

    if (bitValue == 1) {
      c |= (1 << i);
    }
  }

  return c;
}

void showMessage() {
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print(receivedMessage.substring(0, 16));

  lcd.setCursor(0, 1);
  if (receivedMessage.length() > 16) {
    lcd.print(receivedMessage.substring(16, 32));
  }
}

void setup() {
  lcd.init();
  lcd.backlight();
  showReady();
}

void loop() {
  int value = analogRead(solarPin);

  if (value > threshold) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Receiving...");
    lcd.setCursor(0, 1);
    lcd.print("Wait");

    delay(450);

    char c = readChar();

    if (c == '\0') {
      showMessage();
      delay(5000);
      receivedMessage = "";
      showReady();
    } else {
      receivedMessage += c;
      showMessage();
    }

    delay(200);
  }
}