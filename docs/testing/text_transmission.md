# Li-Fi Text Message Transmission

## Plan Text Message Transmission

In this Li-Fi system, text is transmitted using light.

The transmitter converts each character into 8-bit binary. Then the LED blinks according to each bit.

The receiver reads the light using a solar panel or light sensor. It collects 8 bits and converts them back into one character.

---

## Character to 8-bit Binary Conversion

Each character has an ASCII value. This ASCII value is converted into 8-bit binary before transmission.

| Character | ASCII Value | 8-bit Binary |
| --------- | ----------- | ------------ |
| A         | 65          | 01000001     |
| H         | 72          | 01001000     |
| I         | 73          | 01001001     |

Example:

```text
HI
```

is converted into:

```text
01001000 01001001
```

---

## Design Text Transmission Logic

### Transmitter Logic

The transmitter sends one bit at a time using the LED.

* Bit `1` = LED ON
* Bit `0` = LED OFF

Steps:

1. Take a text message.
2. Read one character at a time.
3. Convert the character into 8-bit binary.
4. Blink the LED for each bit.
5. Repeat until the full message is sent.

Example:

```text
A = 01000001
```

The LED sends:

```text
0 1 0 0 0 0 0 1
```

---

### Receiver Logic

The receiver reads the LED light using the solar panel.

* Light detected = `1`
* No light or low light = `0`

Steps:

1. Read the light value from the solar panel.
2. Compare the value with the threshold.
3. Store the detected bit.
4. Wait until 8 bits are collected.
5. Convert the 8 bits into a character.
6. Display or print the character.

Example:

```text
01000001 = A
```

---

## Summary

The transmitter converts text into 8-bit binary and blinks the LED bit by bit.

The receiver collects 8 bits, converts them into characters, and rebuilds the original message.
