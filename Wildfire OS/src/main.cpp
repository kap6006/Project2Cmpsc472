#include <Arduino.h>
#include "sensor.h"
#include "error_handling.h"

// Timing for synchronized updates
unsigned long lastUpdateTime = 0;
const unsigned long updateInterval = 5000; // Update every 5 seconds

volatile bool smokeAlert = false;

void setup() {
    Serial.begin(115200);
    attachInterrupt(digitalPinToInterrupt(2), smokeAlertISR, FALLING); // Example interrupt on pin
}

void loop() {
    unsigned long currentMillis = millis();

    // Synchronize all updates
    if (currentMillis - lastUpdateTime >= updateInterval) {
        lastUpdateTime = currentMillis;

        // Update and display all sensor data
        updateSensorData();
        displaySensorData();

        // Simulate and display memory management data
        simulateMemoryManagement();
    }

    // Handle smoke alert if detected
    if (smokeAlert) {
        triggerAlert();
        smokeAlert = false;
    }
}
