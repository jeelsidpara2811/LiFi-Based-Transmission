# LED Control and Data Transmission

## Overview

The Arduino controls the LED by turning it ON and OFF very quickly.  
These rapid light changes are used to transmit binary data through light.

In this project:

- LED ON = binary 1
- LED OFF = binary 0

This method allows the system to send data using visible light communication (Li-Fi).

---

# How the Arduino Controls the LED

The transmitting Arduino is connected to an LED through a resistor.

The Arduino uses a digital output pin to control the LED state.

Example:
```cpp
digitalWrite(12, HIGH);