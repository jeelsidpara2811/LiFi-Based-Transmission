# M2 Test Results

This file is a working template for documenting Milestone 2 tests.

## Current Test: ON/OFF Li-Fi Transmission

| Test ID | Input Sent from Laptop | Expected LED State | Expected Light Value | Expected LCD Output | Actual Result | Status |
|---|---|---|---|---|---|---|
| T1 | `0` | OFF | Around 350 | LED OFF | To be filled after test | Pending |
| T2 | `1` | ON | Around 600 | LED ON | To be filled after test | Pending |
| T3 | `0 → 1 → 0` | OFF → ON → OFF | 350 → 600 → 350 | LED OFF → LED ON → LED OFF | To be filled after test | Pending |
| T4 | `1 → 0 → 1` | ON → OFF → ON | 600 → 350 → 600 | LED ON → LED OFF → LED ON | To be filled after test | Pending |

## Test Environment

| Parameter | Value |
|---|---|
| Receiver sensor | Solar panel |
| Receiver pin | A3 |
| Threshold | 500 |
| LCD address | 0x27 |
| Baud rate | 9600 |
| Recommended LED distance | 1 cm to 2 cm |

## Notes

- Add real measured values during the actual hardware test.
- Add photos under `media/circuit_photos/`.
- Add demo video under `media/demo_videos/`.
