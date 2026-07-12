# Range, Alignment, and Ambient Light Impact Test

## Purpose

This test measures how LED-to-solar distance, LED alignment, and room lighting affect the Li-Fi receiver accuracy.

The goal is to identify the most stable setup for the final demo.

---

## Test Setup

| Item | Configuration |
|---|---|
| Transmitter | Arduino Uno with 1 LED |
| Receiver | Arduino Uno with solar panel and LCD |
| Solar panel pin | A3 |
| Threshold | 500 |
| Light condition | Indoor room light |
| Power setup | Transmitter via laptop USB, receiver via adapter/power bank |

---

## Test Results

| Test | Distance | Alignment | Light Condition | LED OFF Value | LED ON Value | Result | Observation |
|---:|---|---|---|---:|---:|---|---|
| 1 | 1 cm | Direct | Normal room light | 350 | 600 | PASS | Best and stable signal |
| 2 | 2 cm | Direct | Normal room light | ___ | ___ | PASS/FAIL | ___ |
| 3 | 5 cm | Direct | Normal room light | ___ | ___ | PASS/FAIL | ___ |
| 4 | 1 cm | Slight angle | Normal room light | ___ | ___ | PASS/FAIL | ___ |
| 5 | 1 cm | Direct | Bright light | ___ | ___ | PASS/FAIL | ___ |
| 6 | 1 cm | Direct | Darker room | ___ | ___ | PASS/FAIL | ___ |

---

## Final Selected Demo Setup

| Parameter | Selected Value |
|---|---|
| Distance | 1–2 cm |
| Alignment | LED directly facing solar panel |
| Light condition | Normal indoor room light |
| Threshold | 500 |

---

## Conclusion

The most stable setup is with the LED placed very close to the solar panel at around 1–2 cm and directly aligned with it.

Under normal indoor lighting, the receiver detected:

- LED OFF value: around 350
- LED ON value: around 600

The selected threshold value of 500 gives a clear separation between OFF and ON states, making it suitable for the final demo.