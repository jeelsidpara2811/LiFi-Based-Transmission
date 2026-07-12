# Motivation and Problem Statement

## Motivation

Wireless communication has become foundational to modern IoT systems. Nearly every connected device today transmits data over radio-frequency (RF) channels — Wi-Fi, Bluetooth, Zigbee, or cellular. While RF communication is convenient and ubiquitous, it carries inherent limitations that become critical in specific environments.

This project was motivated by the question: **can visible light serve as a reliable, low-cost wireless communication channel for IoT data transmission?**

Li-Fi (Light Fidelity) is an emerging optical wireless technology that uses the visible light spectrum to carry digital data. Unlike RF-based systems, Li-Fi signals are physically bounded by walls and line-of-sight, which makes them inherently more secure and free from the spectrum congestion problems that affect RF networks.

We chose to build a working Li-Fi prototype because:

- It demonstrates a concrete IoT communication layer using low-cost, accessible hardware (Arduino Uno, LED, solar panel).
- It applies directly to regulated environments such as healthcare, aerospace, and industrial IoT, where RF is restricted or unreliable.
- It provides a hands-on exploration of signal encoding, threshold-based detection, and end-to-end data flow — core concepts in IoT systems design.

---

## Problem Statement

### The RF Dependency Problem

Modern wireless communication infrastructure depends almost entirely on the radio-frequency (RF) spectrum. This creates several well-documented problems:

| Problem | Description |
|---|---|
| **Spectrum congestion** | The RF spectrum is finite and increasingly crowded, leading to interference and reduced throughput in dense environments such as offices, airports, and hospitals. |
| **Security vulnerability** | RF signals penetrate physical barriers (walls, ceilings). This makes it possible to intercept data from outside the intended communication zone. |
| **RF-restricted environments** | Many critical environments, operating theatres, MRI suites, aircraft cabins, military facilities. Prohibit RF transmission because it interferes with sensitive equipment. |
| **Energy inefficiency** | RF transmitters require regulated spectrum access and relatively high energy compared to visible-light alternatives for short-range links. |

### The Gap

Despite the availability of Li-Fi research, there are few **low-cost, open-source, Arduino-based demonstrations** of visible-light data transmission. Most existing implementations use expensive photodiodes, pre-built modules, or proprietary hardware that is inaccessible to students and small teams.

This project fills that gap by building a working Li-Fi proof-of-concept entirely from commodity components — a standard LED, a solar panel as the light sensor, and two Arduino Uno boards.

### What We Set Out to Solve

1. Prove that a solar panel can reliably distinguish between LED-ON and LED-OFF states using a simple analog threshold (no photodiode required).
2. Demonstrate that binary bits can be reliably transmitted over a visible-light channel using time-division ON/OFF modulation.
3. Extend binary transmission to full ASCII text for sending and receiving short messages character by character.
4. Document the constraints, calibration requirements, and performance envelope of this approach so others can build on it.

---

## Scope of This Project

This project is an academic prototype. It does not aim to replace commercial Li-Fi systems or compete on data rate or range. Its purpose is to demonstrate the fundamental principles of visible-light communication within the constraints of two Arduino boards and a 200ms-per-bit timing budget.

The prototype successfully shows:
- That the concept is viable with commodity hardware.
- That threshold-based detection is sufficient for short-range, controlled-lighting conditions.
- That ASCII text messages can be transmitted and displayed end-to-end without error under the right conditions.

---

*FWPM Internet of Things — TH Rosenheim, SoSe 2026*
*Team: Jeel Sidpara · Aatman Sabhaya*
