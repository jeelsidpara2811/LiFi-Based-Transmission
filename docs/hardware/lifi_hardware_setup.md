# Li-Fi Hardware Setup

## LCD Wiring

The 16x2 I2C LCD is connected to the Arduino Uno using four wires.

| LCD Pin | Arduino Uno Pin |
| ------- | --------------- |
| GND     | GND             |
| VCC     | 5V              |
| SDA     | A4              |
| SCL     | A5              |

### Connection Steps

1. Connect **GND** of LCD to **GND** of Arduino.
2. Connect **VCC** of LCD to **5V** of Arduino.
3. Connect **SDA** of LCD to **A4** pin.
4. Connect **SCL** of LCD to **A5** pin.

---

## LED Transmitter Setup

The LED transmitter is connected to **Arduino Uno pin 13**.

| Component        | Arduino Pin         |
| ---------------- | ------------------- |
| LED Positive (+) | Pin 13              |
| LED Negative (-) | 220Ω Resistor → GND |

If using an external LED:

1. Connect the **long leg (+)** of the LED to **pin 13**.
2. Connect the **short leg (-)** to a **220Ω resistor**.
3. Connect the resistor to **GND**.

The LED blinks to transmit binary data.

---

## LCD Test (`lcd_test.ino`)

The `lcd_test.ino` file is used to check whether the LCD works correctly.

It displays:

```text
HELLO
LCD WORKING