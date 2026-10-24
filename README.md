# EcoGuardian — Forest Guardian

An AI-assisted early forest-fire detection and emergency-alert prototype using simulated sensor data, with an optional ESP32 sensor starter sketch.

## Current prototype status
- The web dashboard runs in simulation mode and demonstrates temperature, smoke, fire-risk status, and alert history.
- The included ESP32 sketch is a starting point for hardware testing. Pin numbers and thresholds must be checked against your actual sensors.
- This starter does **not** yet include a trained AI model, live cloud alerts, GSM calling, or GPS integration. Those features require additional implementation and testing.

## Run the dashboard
No installation is required.

1. Download or clone this repository.
2. Open `dashboard/index.html` in a modern browser.
3. Click **Start simulation** to generate sample readings.
4. Click **Stop simulation** to pause the demo.

## Repository structure
- `dashboard/` — browser-based simulated dashboard
- `hardware/esp32_forest_guardian.ino` — ESP32 Arduino starter sketch
- `docs/architecture.md` — architecture overview
- `docs/setup.md` — setup and extension instructions
- `sample-data/sensor_readings.csv` — example readings for testing
- `tests/test-cases.md` — manual test cases
- `LICENSE` — MIT License

## Hardware
Example components: ESP32 development board, temperature sensor, smoke/gas sensor module, buzzer, and LEDs. Verify each module's voltage and output range before connecting. Never connect a sensor output above the ESP32's allowed input voltage. Test safely and do not create real fire or smoke for testing.

## Suggested next steps
1. Validate the dashboard demo.
2. Confirm the exact sensors and pin wiring.
3. Test sensor readings on the ESP32.
4. Add a backend/API for live readings.
5. Add an evaluated fire/smoke image model only if image-based detection is needed.
6. Add location and notification integrations, then test alert reliability.

## License
This project is provided under the MIT License. See `LICENSE`.
