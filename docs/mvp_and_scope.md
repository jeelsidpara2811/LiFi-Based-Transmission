# MVP Definition and Scope Boundary

## What Is the MVP

The Minimum Viable Product (MVP) for this project is a working Li-Fi communication system that can:

1. Accept a short text message entered via Arduino Serial Monitor on the transmitter side.
2. Convert each character to its 8-bit ASCII binary representation.
3. Transmit each bit by switching an LED ON (binary `1`) or OFF (binary `0`) at 200ms intervals.
4. Detect the incoming light signal using a solar panel as an analog receiver.
5. Classify each analog sample as `1` or `0` using a calibrated threshold value.
6. Reconstruct the transmitted character from 8 consecutive bits.
7. Display the decoded message on a 16x2 I2C LCD screen and the Serial Monitor.

This MVP was fully implemented and demonstrated in Milestone 3.

---

## What This Project CAN Do

| Capability | Detail |
|---|---|
| Binary ON/OFF transmission | Reliably transmits binary `0` and `1` over a visible light channel |
| ASCII text transmission | Sends short text messages (tested: `A`, `HI`, `HELLO`, `IOT`) |
| Threshold-based bit detection | Classifies light levels using a fixed analog threshold of `500` |
| LCD output | Displays up to 32 characters (2 rows × 16 columns) on an I2C LCD |
| Serial Monitor verification | Transmitter reads input; receiver confirms decoded output via Serial |
| End-to-end IoT data flow | Covers sensing, encoding, transmission, detection, decoding, and output |
| Low-cost hardware | Full setup under €30 using Arduino Uno, LED, solar panel, LCD |

---

## What This Project CANNOT Do

| Limitation | Reason |
|---|---|
| Long-range transmission | LED intensity and solar panel sensitivity limit reliable range to 1–2 cm |
| Through-wall or non-line-of-sight communication | Visible light requires direct alignment between LED and sensor |
| High-speed data transfer | Solar panel response time limits bit rate to ~5 bits/second (200ms per bit) |
| Continuous streaming | No buffering or flow control — each message must be sent separately |
| Noise-immune reception | Ambient light shifts the solar panel baseline; changes in room lighting affect threshold accuracy |
| Long messages reliably | Messages longer than ~5 characters are more sensitive to timing drift |
| Error correction | No parity bits, checksum, or retransmit logic — a misread bit corrupts the character |
| Bidirectional communication | Only one-way: transmitter → receiver. No ACK or reply channel |
| Wireless range scaling | Not suitable for room-scale or building-scale deployment with current hardware |

---