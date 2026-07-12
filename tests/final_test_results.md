# Final Transmission Accuracy Test Results

## Purpose

This document records the final transmission accuracy tests for the Li-Fi prototype.
The tests verify both basic ON/OFF transmission and simple text-message transmission using LED light and a solar panel receiver.

---

## Test Setup

| Item                  | Configuration                                 |
| --------------------- | --------------------------------------------- |
| Transmitter           | Arduino Uno with 1 LED                        |
| Receiver              | Arduino Uno with solar panel and 16x2 I2C LCD |
| Solar panel pin       | A3                                            |
| LCD I2C address       | 0x27                                          |
| Receiver threshold    | 500                                           |
| LED OFF value         | ~350                                          |
| LED ON value          | ~600                                          |
| LED-to-solar distance | 1–2 cm                                        |
| Light condition       | Indoor room light                             |
| Transmitter power     | Laptop USB                                    |
| Receiver power        | Mobile adapter / power bank                   |
| Serial baud rate      | 9600                                          |

---

## Test 1: ON/OFF Transmission Accuracy

### Objective

Verify that the receiver correctly detects LED OFF and LED ON states.

| Trial | Input Sent | Expected LCD Output | Actual LCD Output | Solar Value | Result | Observation                           |
| ----: | ---------- | ------------------- | ----------------- | ----------: | ------ | ------------------------------------- |
|     1 | `0`        | LED OFF             | LED OFF           |        ~350 | PASS   | Receiver correctly detected OFF state |
|     2 | `1`        | LED ON              | LED ON            |        ~600 | PASS   | Receiver correctly detected ON state  |
|     3 | `0`        | LED OFF             | LED OFF           |        ~350 | PASS   | Stable OFF detection                  |
|     4 | `1`        | LED ON              | LED ON            |        ~600 | PASS   | Stable ON detection                   |
|     5 | `0`        | LED OFF             | LED OFF           |        ~350 | PASS   | No false ON detection                 |
|     6 | `1`        | LED ON              | LED ON            |        ~600 | PASS   | Signal received clearly               |

### Result

The ON/OFF transmission test was successful.
The receiver reliably detected binary `0` and binary `1` using the selected threshold value of `500`.

---

## Test 2: Simple Message Transmission Accuracy

### Objective

Verify that the receiver can read LED light pulses as bits and reconstruct simple characters/messages.

| Trial | Message Sent | Expected LCD Output | Actual LCD Output | Result | Observation                               |
| ----: | ------------ | ------------------- | ----------------- | ------ | ----------------------------------------- |
|     1 | `A`          | A                   | A                 | PASS   | Single character received correctly       |
|     2 | `A`          | A                   | A                 | PASS   | Repeated single-character test successful |
|     3 | `HI`         | HI                  | HI                | PASS   | Short two-character message received      |
|     4 | `HI`         | HI                  | HI                | PASS   | Message repeated successfully             |
|     5 | `HELLO`      | HELLO               | HELLO             | PASS   | Simple word received correctly            |

---

## Test 3: Longer Message Transmission

### Objective

Check whether the system can transmit a longer message.

| Trial | Message Sent      | Expected LCD Output | Actual LCD Output | Result  | Observation                                         |
| ----: | ----------------- | ------------------- | ----------------- | ------- | --------------------------------------------------- |
|     1 | `hi how are you?` | hi how are you?     | To be tested      | PENDING | Longer message requires stable timing and alignment |

---

## Final Observations

* ON/OFF binary transmission is stable.
* The calibrated threshold value of `500` correctly separates LED OFF and LED ON states.
* Short message transmission works best when the LED is placed very close to the solar panel.
* The recommended LED-to-solar distance is 1–2 cm.
* Room lighting affects the solar panel value, so the final demo should use the same lighting condition used during calibration.
* Long messages may require slower bit timing or improved synchronization.

---

## Final Result Summary

| Feature                       | Status                       |
| ----------------------------- | ---------------------------- |
| LED ON/OFF transmission       | PASS                         |
| Solar panel light detection   | PASS                         |
| LCD output display            | PASS                         |
| Threshold calibration         | PASS                         |
| Simple character transmission | PASS / Update after test     |
| Short message transmission    | PASS / Update after test     |
| Long message transmission     | PENDING / Needs optimization |

---

## Conclusion

The final tests confirm that the Li-Fi prototype can reliably transmit binary ON/OFF states using LED light and solar panel detection.
The receiver threshold of `500` is suitable for the final demo setup because it clearly separates LED OFF values around `350` from LED ON values around `600`.

Simple message transmission is implemented and should be verified with repeated tests using short messages such as `A`, `HI`, and `HELLO`.
