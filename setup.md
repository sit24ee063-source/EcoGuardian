# Setup Guide

## Dashboard demo
1. Download the repository.
2. Open `dashboard/index.html` in Chrome, Firefox, or Edge.
3. Press **Start simulation**.
4. Use **Stop simulation** to pause, or **Test alert** to add a test event.

No server or package installation is required for the dashboard demo.

## ESP32 starter sketch
1. Install Arduino IDE and the ESP32 board package.
2. Connect the ESP32 using a USB data cable.
3. Open `hardware/esp32_forest_guardian.ino`.
4. Select the correct ESP32 board and serial port.
5. Verify the sensor pinout and voltage compatibility before wiring.
6. Upload the sketch and open Serial Monitor at 115200 baud.

The temperature input is a placeholder and requires code for the actual temperature sensor model. The smoke thresholds are placeholders; calibrate them safely for the sensor. Do not use the sketch as a certified safety system.
