# EcoGuardian Architecture

## Prototype data flow

```text
[Smoke/Gas Sensor] ----\
                        > [ESP32] ---> [Serial readings]
[Temperature Sensor] --/                   |
                                            v
                                  [Dashboard / Alert UI]
                                            ^
                                            |
                                  [Simulated demo data]
```

## Components
- **Sensors:** Provide raw environmental measurements. Exact models and calibration are project-specific.
- **ESP32:** Reads sensor values and can activate a local LED/buzzer in the starter sketch.
- **Dashboard:** Currently generates simulated data in the browser to demonstrate risk states and event history.
- **Future integration:** A backend/API can receive ESP32 readings and forward them to the dashboard. Notifications and GPS/GSM require separate implementation and testing.

## Limitations
This repository is an educational prototype. The current dashboard does not read the ESP32, and the starter sketch does not provide GPS, GSM, cloud storage, or a trained AI model. The threshold logic is illustrative only and must not be relied on for real emergency warnings.
