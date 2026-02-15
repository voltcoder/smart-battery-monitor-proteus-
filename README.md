# smart-battery-monitor-proteus-
Proteus-based simulation of a Smart Battery Monitoring System using Arduino to measure battery voltage via ADC and display charge level through LEDs and serial communication.

# Smart Battery Monitoring System (Proteus Simulation)

## Project Overview
This project simulates a Smart Battery Monitoring System using Arduino in Proteus.

The system measures battery voltage through an Analog-to-Digital Converter (ADC), calculates the actual battery voltage using a voltage divider, and indicates battery level using LEDs. The measured voltage is also displayed on a virtual serial terminal.

This project demonstrates fundamental embedded system concepts including ADC, voltage scaling, GPIO control, and serial communication.

---

## Objectives
- Read analog voltage using ADC
- Convert ADC value to actual battery voltage
- Display battery level using LED indicators
- Transmit voltage data over serial communication
- Simulate the complete system in Proteus

---

## Components Used
- Arduino Uno
- DC Voltage Source (Battery simulation)
- Voltage Divider (Resistors)
- 3 LEDs
- 3 Current-limiting resistors (220Ω)
- Virtual Terminal (Serial Monitor)

---

## Working Principle

1. The battery voltage is applied to a voltage divider to reduce it below 5V.
2. The scaled voltage is connected to the Arduino analog pin (A0).
3. The Arduino ADC converts the analog voltage into a digital value.
4. The program calculates the actual battery voltage.
5. LEDs indicate battery level based on voltage thresholds.
6. The measured voltage is displayed in the virtual terminal.

---

## Voltage Divider Design

To protect the ADC input, a voltage divider is used.

Example:
- R1 = 10kΩ
- R2 = 5kΩ

Voltage scaling factor ≈ 3

This ensures higher battery voltages are safely reduced before reaching the Arduino.

---

## LED Indication Logic

- Voltage > 12V → 3 LEDs ON (Fully charged)
- 11V – 12V → 2 LEDs ON (Medium level)
- < 11V → 1 LED ON (Low battery)

---

## Software Architecture

- ADC reading using `analogRead()`
- Voltage calculation using scaling factor
- Conditional logic for battery level indication
- Serial communication at 9600 baud rate

---

## Learning Outcomes

This project demonstrates:

- Analog-to-Digital Conversion (ADC)
- Voltage scaling and measurement
- GPIO control
- Embedded C programming
- Simulation-based embedded development
- System-level thinking

---

## Folder Structure

smart-battery-monitor-proteus/
│
├── code/

│ └── battery_monitor.ino

├── simulation/

│ └── battery_monitor.pdsprj

├── screenshots/

│ └── simulation_running.png

└── README.md
