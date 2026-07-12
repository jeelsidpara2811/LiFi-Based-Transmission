# Receiver Threshold Calibration for Final Demo

## Purpose

This document records the receiver threshold calibration for the final Li-Fi demo.
The goal is to identify a reliable threshold value that allows the receiver Arduino to distinguish between LED OFF and LED ON states using the solar panel reading.

The threshold is used by the receiver code to convert light intensity into binary values:

```cpp
value > threshold  → binary 1
value <= threshold → binary 0
```

---

## Final Demo Setup

| Item                  | Configuration                                 |
| --------------------- | --------------------------------------------- |
| Transmitter           | Arduino Uno with 1 LED                        |
| Receiver              | Arduino Uno with solar panel and 16x2 I2C LCD |
| Solar panel input pin | A3                                            |
| LCD I2C address       | 0x27                                          |
| LED-to-solar distance | 1–2 cm                                        |
| Light condition       | Indoor room light                             |
| Transmitter power     | Laptop USB                                    |
| Receiver power        | Mobile adapter / power bank                   |

---

## Calibration Method

The receiver was tested under the same conditions planned for the final demo.

Steps followed:

1. The LED was placed close to the solar panel.
2. The transmitter Arduino was connected to the laptop.
3. The receiver Arduino displayed the solar panel light value.
4. The value was recorded when the LED was OFF.
5. The value was recorded when the LED was ON.
6. A threshold value was selected between the OFF and ON readings.

---

## Measured Values

| Test State | Transmitter Input | Approximate Solar Panel Value |
| ---------- | ----------------: | ----------------------------: |
| LED OFF    |               `0` |                          ~350 |
| LED ON     |               `1` |                          ~600 |

---

## Selected Threshold

The selected threshold value is:

```cpp
const int threshold = 500;
```

---

## Reason for Selecting Threshold 500

The measured LED OFF value was approximately **350**, and the measured LED ON value was approximately **600**.

A threshold of **500** was selected because it clearly separates the OFF and ON states:

* Values below 500 are treated as LED OFF / binary `0`
* Values above 500 are treated as LED ON / binary `1`

This gives enough safety margin between the two measured values and makes the receiver more stable during the final demo.

---

## Result

The selected threshold successfully detects the LED state under final demo conditions.

| Condition | Expected Output      |
| --------- | -------------------- |
| LED OFF   | Receiver detects `0` |
| LED ON    | Receiver detects `1` |

This threshold will be used in the final receiver code for binary detection and message decoding.

---

## Notes

The threshold may need recalibration if any of the following conditions change:

* LED-to-solar distance
* Room lighting
* LED brightness
* Solar panel angle
* Power source
* Use of additional LEDs

For the current final demo setup, threshold `500` is suitable.
