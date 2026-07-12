# Li-Fi ON/OFF Transmission Test

## Step 1: Upload the Code

1. Connect the **transmitter Arduino** to the laptop using USB.
2. Open the transmitter code in Arduino IDE.
3. Select the correct board: **Arduino Uno**.
4. Select the correct port.
5. Click **Upload**.
6. Disconnect the transmitter Arduino after upload.

Now repeat the same steps for the **receiver Arduino**:

1. Connect the **receiver Arduino** to the laptop using USB.
2. Open the receiver code in Arduino IDE.
3. Select **Arduino Uno**.
4. Select the correct port.
5. Click **Upload**.

---

## Step 2: Power Both Arduinos

After uploading the code:

1. Keep both Arduinos connected using USB cables or external power.
2. The transmitter Arduino controls the LED.
3. The receiver Arduino reads the solar panel value.

---

## Step 3: Align LED and Solar Panel

1. Place the LED in front of the solar panel.
2. Make sure the LED directly points toward the solar panel.
3. Keep the distance short for better reading.
4. Avoid strong room light or sunlight during testing.

---

## Step 4: Send `0` and `1`

Open the Serial Monitor for the transmitter Arduino.

Use baud rate:

```text
9600
```

Send:

```text
1
```

Result:

```text
LED ON
```

Send:

```text
0
```

Result:

```text
LED OFF
```

---

## Step 5: Check Receiver Output

The receiver reads the solar panel value.

* When LED is ON, the value should be high.
* When LED is OFF, the value should be low.

Example:

| Sent Value | LED State | Receiver Detection |
| ---------- | --------- | ------------------ |
| 1          | ON        | 1                  |
| 0          | OFF       | 0                  |

---

## Summary

This test checks simple Li-Fi communication using ON and OFF light signals.

* `1` means LED ON
* `0` means LED OFF
* The solar panel receives the light signal
* The receiver detects the transmitted value
