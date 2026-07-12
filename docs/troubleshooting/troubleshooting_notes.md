# M2 Troubleshooting Notes

This file documents common problems and fixes for the Li-Fi ON/OFF prototype.

## 1. LCD Shows Random Characters

### Possible Causes

- Wrong code uploaded.
- LCD got confused due to power fluctuation.
- Loose I2C wires.
- Wrong I2C address.
- Power issue.

### Fix

1. Upload the LCD test code again.
2. Check wiring:
   - VCC → 5V
   - GND → GND
   - SDA → A4
   - SCL → A5
3. Restart Arduino.
4. If still not working, try LCD address `0x3F` instead of `0x27`.

---

## 2. LCD Does Not Change When Sending `1` or `0`

### Possible Cause

The threshold may be wrong.

### Fix

Use a threshold between the measured OFF and ON values.

Current values:

```text
OFF = around 350
ON  = around 600
```

Current threshold:

```text
500
```

---

## 3. Solar Panel Value Does Not Increase

### Check

- Solar panel positive is connected to A3.
- Solar panel negative is connected to GND.
- LED is close enough to the solar panel.
- LED is facing the solar panel.
- Room light is not too strong.
- Serial Monitor is sending the correct command.
- LED actually turns ON when `1` is sent.

---

## 4. Arduino Port Confusion

If both Arduinos appear as different COM ports, this is normal.

### Fix

Always check:

```text
Tools → Port
```

Select the COM port that shows:

```text
Arduino UNO
```

---

## 5. LCD Flickering

### Possible Cause

The code clears the LCD frequently.

### Fix

Use a delay and avoid unnecessary `lcd.clear()` calls if the display becomes unstable.

---

## 6. Weak Signal

### Possible Causes

- LED is too far from the solar panel.
- LED is not aligned.
- Ambient light is too strong.

### Fix

- Keep LED around 1 cm to 2 cm from the solar panel.
- Point the LED directly at the solar panel.
- Shield the receiver from external light if needed.
