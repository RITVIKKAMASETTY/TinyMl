# TinyML & IoT Projects

A collection of TinyML and IoT-based embedded systems projects built using Arduino/ESP32 and C++.

---

## Projects

### 🤖 TinyML — Machine Fault Detection (`TinyMl/`)

A TinyML pipeline that trains a neural network on vibration data, converts it to TensorFlow Lite, and deploys it on an ESP32 microcontroller to detect machine faults in real time.

- Train model → `.h5` / `.tflite` / `model.h`
- Simulate inference on Wokwi
- Classify vibration as **Normal** or **Fault**

> See [`TinyMl/readme.md`](TinyMl/readme.md) for full details.

---

### 🚪 Smart Door (`SmartDoor.c++`)

An automated door system using a proximity/IR sensor. Detects presence and controls a servo motor to open/close the door automatically.

---

### 🗑️ Smart Dustbin (`SmartDustbin.c++`)

An ultrasonic sensor-based smart dustbin that automatically opens its lid when a hand is detected nearby, promoting contactless and hygienic waste disposal.

---

### 🚦 Traffic Signal (`TrafficSignal.c++`)

An adaptive traffic signal controller simulated on an embedded platform. Cycles through red, yellow, and green states with configurable timing.

---

### 🕵️ Smart Motion Detector (`SmartMotionDetector.c++`)

A PIR sensor-based motion detection system that triggers an alert (LED/buzzer) when movement is detected in the monitored area.

---

## Tech Stack

| Tool | Purpose |
|---|---|
| **C / C++** | Embedded firmware |
| **Arduino / ESP32** | Microcontroller platform |
| **Python + TensorFlow** | ML model training (TinyML project) |
| **TensorFlow Lite** | On-device ML inference |
| **Wokwi** | Browser-based embedded simulator |

---

## Getting Started

1. Open any `.c++` file in the Arduino IDE or PlatformIO.
2. Select the correct board (e.g., **ESP32 Dev Module**).
3. Upload to your hardware or run in [Wokwi](https://wokwi.com).
4. For the TinyML project, run `TinyMl/a.ipynb` first to train and export the model.

---

## Reference

📄 [`Iot_ritvi.pdf`](Iot_ritvi.pdf) — Project report and documentation.
