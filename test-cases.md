# Manual Test Cases

These tests cover the demo interface and starter sketch behavior. They are not validation of real fire-detection performance.

| ID | Test | Steps | Expected result |
|---|---|---|---|
| TC-01 | Open dashboard | Open `dashboard/index.html` | Dashboard loads and labels demo values as simulated |
| TC-02 | Start simulation | Click Start simulation | Readings update periodically |
| TC-03 | Stop simulation | Click Stop simulation | Periodic updates stop |
| TC-04 | Test alert | Click Test alert | A test-only event appears in activity history |
| TC-05 | ESP32 serial output | Upload sketch with safe, correct wiring | Serial Monitor prints smoke raw value and status |
| TC-06 | Threshold behavior | Use controlled sensor input/test setup | LED/buzzer behavior matches configured placeholder thresholds |

## Safety
Never test with a real flame. Follow the sensor manufacturer's guidance. Validate readings using safe, controlled methods and qualified supervision.
