# Arduino PWM LED Control

## 📌 Project Overview

This project demonstrates **Pulse Width Modulation (PWM)** using an Arduino to control the brightness of an LED.

The user can enter a PWM percentage through the **Serial Monitor**. The Arduino converts the selected percentage into an **8-bit PWM value (0–255)** and applies it to the LED using `analogWrite()`.

### Supported PWM Levels

- **0%** → LED OFF
- **25%** → Low Brightness
- **50%** → Medium Brightness
- **75%** → High Brightness
- **100%** → Full Brightness

---

## 💡 What is PWM?

> **PWM means switching a digital output ON and OFF very fast and controlling how long it stays ON in each cycle.**

And **Duty Cycle** simply means:

> **What percentage of each cycle is ON.**

### PWM and Duty Cycle

| Duty Cycle | PWM Value | LED Output |
|---:|---:|---|
| 0% | 0 | OFF |
| 25% | 63 | Low Brightness |
| 50% | 127 | Medium Brightness |
| 75% | 191 | High Brightness |
| 100% | 255 | Full Brightness |

Arduino uses **8-bit PWM resolution**, providing PWM values from **0 to 255**.

---

## 🔧 Components Required

- Arduino Board
- LED
- Current-Limiting Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connection

| Component | Arduino Pin |
|---|---|
| LED Anode (+) | Digital Pin 5 |
| LED Cathode (-) | GND through Resistor |

> **Note:** Use a suitable current-limiting resistor with the LED.

---

## ⚙️ How It Works

1. Arduino configures **Digital Pin 5** as a PWM output.
2. The Serial Monitor prompts the user to enter a PWM percentage.
3. The entered value is checked against the supported levels: **0%, 25%, 50%, 75%, and 100%**.
4. The percentage is converted into an 8-bit PWM value using the formula: `PWM Value = (Percentage × 255) / 100`.
5. The calculated PWM value is applied to the LED using `analogWrite()`.
6. The LED remains at the selected brightness until another valid PWM level is entered.

---

## 🖥️ Serial Monitor

Set the Serial Monitor baud rate to **9600 baud**.

Enter one of the supported PWM levels:

`0`, `25`, `50`, `75`, or `100`

### Example Output

`PWM LED CONTROL`  
`Enter PWM percentage:`  
`0, 25, 50, 75 or 100`  
`PWM = 50%`  
`PWM Value = 127`  
`LED will stay at this level.`  
`Enter next level:`

---

## 🧮 PWM Conversion

The Arduino converts the selected percentage into an **8-bit PWM value**.

For example, for a **75% duty cycle**:

`PWM Value = (75 × 255) / 100 = 191`

Therefore, a **75% duty cycle** produces a PWM value of approximately **191 out of 255**.

---

## 🎥 Project Demonstration

📹 **Project Demonstration Video:**  
[Watch the PWM LED Control Demonstration](https://drive.google.com/file/d/1B4Un47Wq327-wTWsIbRLitj1q5QWpm4J/view?usp=drivesdk)

---

## 🧠 Key Learning

This project demonstrates:

- **PWM Fundamentals**
- **Duty Cycle**
- **8-bit PWM Resolution**
- **`analogWrite()` Function**
- **Serial Monitor Input**
- **Percentage-to-PWM Conversion**
- **LED Brightness Control**
- **Arduino Programming**

---

## 🚀 Future Improvements

- Add a potentiometer for real-time PWM control
- Support any PWM percentage from **0–100%**
- Display PWM percentage on an LCD
- Control multiple LEDs using PWM
- Add Bluetooth or IoT-based PWM control
