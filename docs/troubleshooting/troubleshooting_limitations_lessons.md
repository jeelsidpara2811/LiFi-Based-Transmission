# Troubleshooting, Limitations, and Lessons Learned

## Troubleshooting

### 1. Weak Solar Signal

**Issue:**
The solar panel sometimes produced weak or unstable values.

**Cause:**
The LED was too far from the solar panel or not directly facing it.

**Fix:**
Place the LED close to the solar panel, around 1–2 cm, and align it directly.

---

### 2. Threshold Drift

**Issue:**
The receiver sometimes misread LED ON/OFF values.

**Cause:**
Solar values changed depending on distance, angle, and room lighting.

**Fix:**
Calibrate the threshold under final demo conditions.
Final measured values:

| State   | Value |
| ------- | ----: |
| LED OFF |  ~350 |
| LED ON  |  ~600 |

Selected threshold:

```cpp
const int threshold = 500;
```

---

### 3. Ambient Light Effect

**Issue:**
Room light affected the solar panel readings.

**Cause:**
The solar panel receives light from both the LED and the environment.

**Fix:**
Use stable indoor lighting and avoid strong external light. Keep the demo setup consistent.

---

### 4. LED Alignment Dependency

**Issue:**
Receiver accuracy decreased when the LED was not directly facing the solar panel.

**Fix:**
Keep the LED directly aligned with the solar panel during testing and final demo.

---

### 5. LCD Issues

**Issue:**
LCD showed blank output or random characters.

**Cause:**
Possible reasons included missing library, wrong wiring, power fluctuation, or incorrect I2C setup.

**Fix:**

* Install `LiquidCrystal I2C` library.
* Check LCD wiring:

  * SDA → A4
  * SCL → A5
  * VCC → 5V
  * GND → GND
* Use LCD address `0x27`.
* Re-upload simple LCD test code if needed.

---

### 6. Low Data Rate

**Issue:**
Message transmission is slow.

**Cause:**
The solar panel responds slowly compared to faster optical sensors like photodiodes.

**Fix:**
Use slower bit timing for stability.
Current bit delay:

```cpp
const int bitDelay = 200;
```

Longer messages may still require more delay or better synchronization.

---

## Limitations

* Solar panel response is slow.
* Ambient light affects accuracy.
* LED and solar panel must be closely aligned.
* Communication range is short.
* Long messages are not fully reliable yet.
* LCD can display only 16 characters per line.
* Threshold may need recalibration if lighting or distance changes.

---

## Lessons Learned

* Li-Fi communication is possible using simple Arduino hardware.
* Calibration is very important for reliable signal detection.
* A fixed threshold only works well under stable demo conditions.
* Hardware alignment affects communication accuracy.
* Debugging light values on LCD and Serial Monitor is useful.
* Simple ON/OFF communication is stable before moving to text messages.
* Text transmission needs timing synchronization between transmitter and receiver.
* Real-world IoT projects require repeated testing, calibration, and documentation.

---

## Final Presentation Notes

The prototype successfully demonstrates basic Li-Fi communication using an LED and solar panel. The ON/OFF binary transmission works reliably under controlled conditions. Text transmission is implemented experimentally, but speed and reliability are limited by the solar panel response time and sensitivity to environmental light.
