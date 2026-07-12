# Solar Panel Wiring

This file documents the receiver-side solar panel wiring for the Li-Fi prototype.

## Connection Table

| Solar Panel Wire | Arduino Uno Pin |
|---|---|
| Positive `+` | A3 |
| Negative `-` | GND |

## Purpose

The solar panel is used as a light sensor.  
When the LED light shines on the solar panel, the analog value read by Arduino increases.

## Important Notes

- The solar panel negative wire must be connected to Arduino GND.
- The receiver code reads the solar panel value using `analogRead(A3)`.
- The LED should directly face the solar panel during testing.
- For stable testing, keep the LED close to the solar panel.

## Current Measured Values

| LED State | Approximate Solar Panel Value |
|---|---:|
| LED OFF | Around 350 |
| LED ON | Around 600 |

## Threshold

The current receiver threshold is:

```cpp
const int threshold = 500;
```

This value is between the OFF and ON readings, so the receiver can decide whether the LED is ON or OFF.
