# M2 Testing Procedure

This procedure explains how to test the current ON/OFF Li-Fi prototype.

## Step 1 — Upload Transmitter Code

Open and upload:

```text
src/transmitter/LED_Transmitter/m2_led_transmitter.ino
```

Upload it to the Arduino connected to the LED.

## Step 2 — Upload Receiver Code

Open and upload:

```text
src/receiver/Solar_LCD_Receiver/m-2_solar_lcd_receiver.ino
```

Upload it to the Arduino connected to the solar panel and LCD.

## Step 3 — Power the Receiver

Power the receiver Arduino using one of these options:

- Laptop USB
- Power bank
- Mobile phone adapter through USB cable

Do not connect adapter wires directly to Arduino pins unless voltage and polarity are fully verified.

## Step 4 — Align LED and Solar Panel

Keep the LED close to the solar panel.

Recommended distance:

```text
1 cm to 2 cm
```

The LED should directly face the solar panel.

## Step 5 — Open Serial Monitor

For the transmitter Arduino, open:

```text
Tools → Serial Monitor
```

Set baud rate:

```text
9600
```

## Step 6 — Test LED OFF

Send:

```text
0
```

Expected result:

```text
Light: around 350
LED OFF
```

## Step 7 — Test LED ON

Send:

```text
1
```

Expected result:

```text
Light: around 600
LED ON
```

## Pass Condition

The test passes if the LCD correctly changes between:

```text
LED OFF
LED ON
```

based on laptop input.
