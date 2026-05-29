# TinyML-Based Machine Fault Detection

## Overview

This project demonstrates a TinyML-based system for detecting machine faults using vibration data. A machine learning model is trained to classify vibration signals into two categories: normal condition and fault condition. The trained model is converted into a lightweight format suitable for deployment on embedded systems. Due to simulation environment limitations, inference is simulated in Wokwi.

---

## Project Concept

Industrial machines generate vibration signals during operation. Abnormal vibration patterns are indicative of potential mechanical faults. This project uses vibration sensor data as input, applies a machine learning classifier to distinguish normal from faulty behavior, and simulates real-time fault detection on an embedded system platform.

---

## System Architecture

```
Sensor Data --> ML Model --> Prediction --> Output (Fault / Normal)
                    |
           (Simulated in Wokwi)
```

---

## Tech Stack

- **Python** — Model training and data processing
- **TensorFlow / Keras** — Neural network definition and training
- **TensorFlow Lite** — Model conversion for embedded deployment
- **C / C++** — Embedded firmware code
- **Wokwi** — Browser-based embedded system simulator

---

## Project Structure

```
├── a.ipynb          # Model training notebook
├── model.h5         # Trained Keras model
├── model.tflite     # Converted TensorFlow Lite model
├── model.h          # C array representation for firmware deployment
└── README.md
```

---

## Step 1: Train the ML Model

A feedforward neural network is trained on labeled vibration data.

- **Input:** Vibration sensor readings (floating-point values)
- **Output:** Binary classification — `0` for Normal, `1` for Fault

The model learns the statistical boundary between normal and abnormal vibration amplitudes during training.

---

## Step 2: Convert to TinyML Format

After training, the model is converted into two formats suitable for embedded systems:

- **`.tflite`** — TensorFlow Lite format, which is a compressed and optimized representation of the model that runs efficiently on microcontrollers.
- **`.h`** — A C header file containing the model weights as a byte array, generated using the `xxd` command-line utility. This allows the model to be directly compiled into embedded firmware.

---

## Step 3: Simulation in Wokwi

TensorFlow Lite Micro libraries are not fully supported within the Wokwi simulation environment. As a workaround:

- Vibration sensor input is simulated using randomly generated values or a potentiometer component.
- ML inference is approximated using threshold-based logic that mimics model output behavior.

---

## Simulation Code

```cpp
#define SENSOR_PIN 36

void setup() {
  Serial.begin(115200);
}

void loop() {
  float vibration = random(0, 1000) / 1000.0;

  Serial.print("Vibration: ");
  Serial.print(vibration);
  Serial.print(" -> ");

  if (vibration > 0.5) {
    Serial.println("Fault Detected!");
  } else {
    Serial.println("Machine Normal");
  }

  delay(1000);
}
```

The threshold value `0.5` acts as a stand-in for the model's decision boundary. Values above this threshold are classified as faults; values below are classified as normal.

---

## Sample Output

```
Vibration: 0.23 -> Machine Normal
Vibration: 0.81 -> Fault Detected!
```

---

## Note on Simulation Limitations

The Wokwi environment does not support actual TinyML inference execution. The threshold logic used in simulation is a simplified approximation of what the trained model computes.

In a real embedded deployment:

- The `model.h` file is included in the firmware source.
- TensorFlow Lite Micro runtime is compiled alongside the firmware.
- The ESP32 microcontroller executes genuine model inference on live sensor readings.

---

## Key Learnings

- Building an end-to-end TinyML pipeline from data collection to embedded deployment
- Converting trained models into formats compatible with resource-constrained hardware
- Understanding edge AI concepts including on-device inference and model quantization
- Recognizing the differences between simulated and real embedded deployments

---

## Real-World Applications

- **Predictive Maintenance** — Detecting machine degradation before failure occurs
- **Industrial Monitoring** — Continuous health monitoring of rotating machinery
- **Smart Manufacturing** — Automated quality and equipment control systems
- **IoT-Based Fault Detection** — Networked edge devices reporting anomalies in real time