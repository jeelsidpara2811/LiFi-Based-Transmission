# Business Model for Li-Fi Based Data Transmission

## Overview

This document describes a possible business model for commercialising the Li-Fi prototype developed in the FWPM Internet of Things course at TH Rosenheim. The model is domain-specific. It targets the **healthcare industry** as the primary vertical, where RF-free wireless communication has clear regulatory and safety value.

> **Note:** Multiple business models are possible depending on the deployment domain (e.g., industrial monitoring, aerospace, smart buildings, education). The model described in this document is specifically designed for the **healthcare domain**.

---

## 1. Market Problem

| Challenge | Detail |
|---|---|
| RF interference | Medical devices (MRI, ECG, ventilators) are sensitive to RF signals from Wi-Fi and Bluetooth |
| Security exposure | RF signals pass through walls and patient data can be intercepted |
| Regulatory constraints | Many hospital zones prohibit RF transmission near critical equipment |
| Network congestion | High device density in wards creates unreliable wireless coverage |

---

## 2. Target Market

**Primary:** Hospitals, clinics, and diagnostic centres with RF-restricted zones.

**Secondary verticals** (out of scope for this model, but applicable):

- Aircraft cabins and aerospace (EMI-sensitive environments)
- Industrial monitoring in RF-noisy factory floors
- Smart building access control (line-of-sight zone enforcement)
- Educational IoT demonstration kits

---

## 3. Value Proposition

| Feature | Benefit to Healthcare |
|---|---|
| Zero RF emission | Fully safe around sensitive medical equipment |
| Line-of-sight containment | Data stays within the room and inherently private |
| Low-cost hardware | Arduino-based prototype under €30; production unit under €100 |
| No spectrum licensing | No regulatory approval needed for visible light |
| Low power consumption | LED-based transmitter runs on USB power |

---

## 4. Revenue Model

### Tier 1 — Hardware Kit (One-Time Sale)

| Item | Description |
|---|---|
| Li-Fi Transmitter Unit | Arduino-based LED transmitter, pre-calibrated |
| Li-Fi Receiver Unit | Solar panel / photodiode receiver with LCD output |
| Setup & Calibration | On-site threshold calibration to match lighting conditions |
| Documentation & Support | Technical guide, wiring diagram, troubleshooting reference |

### Tier 2 — Software / SaaS Layer (Recurring)

| Item | Description |
|---|---|
| Monitoring Dashboard | Web-based transmission log and signal quality monitor |
| Remote Diagnostics | Alert on threshold drift or signal failure |
| Firmware Updates | OTA sketch updates for transmitter/receiver |

---

## 5. Cost Structure

| Cost Item | Estimated Range |
|---|---|
| Hardware components (per unit) | €25 – €50 |
| Assembly and calibration | €10 – €20 per deployment |
| Software development (one-time) | €5,000 – €15,000 |
| Support and maintenance (annual) | 10–15% of contract value |

---

## 6. Competitive Advantage

| Factor | Li-Fi (This Project) | Wi-Fi | Bluetooth |
|---|---|---|---|
| RF emission | None | High | Medium |
| Security (physical containment) | High (line-of-sight) | Low | Low |
| Cost | Low | Medium | Low |
| Data rate (current prototype) | Low | High | Medium |
| Suitable for RF-restricted zones | Yes | No | No |

The primary competitive moat is **safety compliance** not raw data rate. In RF-restricted healthcare environments, Li-Fi is not competing with Wi-Fi on speed; it is the only wireless option that is permitted.

---

## 7. Market Opportunity

Global hospital wireless communication market is estimated at **$10B+**.

| Scenario | Assumption | Revenue Potential |
|---|---|---|
| Conservative | 0.1% market capture | ~$10M |
| Moderate | 1% market capture | ~$100M |
| Optimistic | 5% market capture | ~$500M |

*Figures are illustrative for academic context and not based on formal market research.*

---

## 8. Limitations and Risks

| Risk | Impact | Mitigation |
|---|---|---|
| Line-of-sight requirement | Cannot pass through walls or obstacles | Position hardware during installation; fixed mounting |
| Short range (1–2 cm prototype) | Not suitable for room-scale deployment without stronger hardware | Use high-power LEDs and photodiode receivers in production |
| Ambient light interference | Affects threshold accuracy | Calibrate on-site; shield receiver from overhead light |
| Low data rate | Limits to short text/sensor data | Sufficient for medical sensor readings and alerts |
| Niche market | Slower adoption than general wireless | Target early adopters in high-compliance environments |

---

## 9. Summary

| Dimension | Description |
|---|---|
| Domain | Healthcare (RF-restricted environments) |
| Customer | Hospitals, clinics, diagnostic labs |
| Core offer | RF-free wireless data transmission hardware + monitoring SaaS |
| Revenue type | One-time hardware sale + recurring SaaS subscription |
| Key differentiator | Zero RF emission, inherent physical security, low cost |
| Market entry | Pilot deployments in ICU / MRI zones |

---

*This business model was developed as part of the FWPM Internet of Things project — TH Rosenheim, SoSe 2026.*
*Team: Jeel Sidpara · Aatman Sabhaya*
