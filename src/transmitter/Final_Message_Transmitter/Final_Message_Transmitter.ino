const int ledPin = 13;
const int bitDelay = 200;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(9600);
}

void sendBit(int bitValue) {
  digitalWrite(ledPin, bitValue ? HIGH : LOW);
  delay(bitDelay);
}

void sendChar(char c) {
  digitalWrite(ledPin, HIGH);
  delay(450);

  digitalWrite(ledPin, LOW);
  delay(200);

  for (int i = 7; i >= 0; i--) {
    int bitValue = (c >> i) & 1;
    sendBit(bitValue);
  }

  digitalWrite(ledPin, LOW);
  delay(400);
}

void loop() {
  if (Serial.available() > 0) {
    String message = Serial.readStringUntil('\n');

    for (int i = 0; i < message.length(); i++) {
      sendChar(message[i]);
    }

    sendChar('\0');
  }
}
