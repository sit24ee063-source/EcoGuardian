/*
  EcoGuardian ESP32 starter sketch
  IMPORTANT:
  - This is starter code, not a validated fire detection system.
  - Confirm your exact sensor model, wiring, voltage, and thresholds first.
  - Do not expose sensors to real flames or dangerous smoke.
*/
const int SMOKE_PIN = 34;       // Example analog input; adjust to your board/wiring
const int TEMP_PIN = 35;        // Example only. Many temperature sensors use a digital bus.
const int BUZZER_PIN = 25;      // Optional buzzer
const int LED_PIN = 2;          // Onboard LED varies by ESP32 board

// Placeholder values only. Calibrate for the exact sensor and environment.
const int SMOKE_WARNING = 300;
const int SMOKE_HIGH = 500;

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);
  Serial.println("EcoGuardian sensor starter ready");
  Serial.println("Check wiring and calibrate thresholds before testing.");
}

void loop() {
  int smokeRaw = analogRead(SMOKE_PIN);
  // TEMP_PIN is not read here because temperature sensors require model-specific code.
  Serial.print("smoke_raw=");
  Serial.println(smokeRaw);

  if (smokeRaw >= SMOKE_HIGH) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.println("DEMO_STATUS=HIGH_SMOKE_READING");
  } else if (smokeRaw >= SMOKE_WARNING) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, LOW);
    Serial.println("DEMO_STATUS=WARNING");
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    Serial.println("DEMO_STATUS=NORMAL");
  }

  delay(2000);
}
