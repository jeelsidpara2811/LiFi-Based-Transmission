# Li-Fi Threshold Calibration and ON/OFF Transmission Test

## Measured Light Values

The solar panel detects different analog values depending on whether the LED is OFF or ON.

### Measured Values

| LED State | Measured Value |
| --------- | -------------- |
| LED OFF   | Around **350** |
| LED ON    | Around **600** |

Based on these values, a threshold was selected.

### Selected Threshold

```text
Threshold = 500
```

### Logic

* If sensor value is **greater than 500** → LED is detected as **ON (1)**
* If sensor value is **less than 500** → LED is detected as **OFF (0)**

This threshold helps the receiver correctly identify transmitted bits.

---

## Threshold Calibration

Threshold calibration is used to find a suitable value for detecting light changes.

### Steps

1. Turn the transmitter LED **OFF** and note the sensor value.

   * Measured value ≈ **350**

2. Turn the transmitter LED **ON** and note the sensor value.

   * Measured value ≈ **600**

3. Choose a value between both readings.

Selected threshold:

```text
500
```

This value helps reduce incorrect readings caused by room lighting or small fluctuations.

---

## Test ON/OFF Li-Fi Transmission

This test verifies whether the receiver correctly detects LED ON and OFF signals.

### Step 1: Upload Code

* Upload the **transmitter code** to the first Arduino.
* Upload the **receiver code** to the second Arduino.

---

### Step 2: Power Both Arduinos

Connect both Arduino boards to power using USB cables.

* **Transmitter Arduino** → LED connected to pin 13
* **Receiver Arduino** → Solar panel connected to A3 and LCD connected

---

### Step 3: Align LED and Solar Panel

Place the LED directly facing the solar panel.

Make sure:

* LED light points toward the solar panel
* Distance is short
* No strong outside light interferes

---

### Step 4: Send `0` and `1`

Send signals using the transmitter:

* `1` → LED turns **ON**
* `0` → LED turns **OFF**

The receiver reads:

* Value > **500** → detects `1`
* Value < **500** → detects `0`

The LCD displays the received light value and LED status.

---

## Summary

The Li-Fi system was tested using measured light values.

* LED OFF ≈ **350**
* LED ON ≈ **600**
* Threshold selected = **500**

The threshold allows reliable detection of ON/OFF transmission between the LED transmitter and solar panel receiver.
