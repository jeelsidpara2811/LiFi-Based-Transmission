# Final Hardware Components for M2

This file documents the actual hardware used for the current Milestone 2 Li-Fi ON/OFF prototype.

## Hardware List

| Component | Quantity | Purpose |
|---|---:|---|
| Arduino Uno | 2 | One board is used as the transmitter and one board is used as the receiver. |
| LED | 1 | Sends the Li-Fi signal by turning ON and OFF. |
| Solar panel | 1 | Works as the light receiver/sensor. |
| 16x2 LCD display | 1 | Displays the detected light value and LED status. |
| I2C LCD backpack/module | 1 | Connects the LCD to Arduino using SDA/SCL pins. |
| Jumper wires | As needed | Used for circuit connections. |
| USB cable for Arduino | 2 | Used for code upload and power. |
| Laptop with Arduino IDE | 1 | Used to upload code and send serial input `1` or `0`. |
| Mobile adapter / power bank | 1 | Used to power the receiver Arduino during testing. |

## Current Prototype Roles

### Transmitter Arduino

The transmitter Arduino is connected to the laptop.  
It receives input from the Serial Monitor and controls the LED.

Current control:

```text
1 → LED ON
0 → LED OFF
```

### Receiver Arduino

The receiver Arduino is connected to the solar panel and LCD.  
It reads analog light values from the solar panel and displays the result on the LCD.

Current output:

```text
Light: <analog value>
LED ON / LED OFF
```

## Current M2 Prototype Status

The current prototype demonstrates basic binary ON/OFF Li-Fi transmission.  
It does not yet transmit full text messages such as `HI` or `HELLO`.

## Next Development Step

The next technical step is to convert characters into 8-bit binary values and transmit them using LED pulses.
