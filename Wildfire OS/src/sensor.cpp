#include <Arduino.h>
#include "sensor.h"

// Sensor value placeholders
static float temperature = 0;
static float humidity = 0;
static float smokeLevel = 0;

// Thresholds for alerts
const float SMOKE_THRESHOLD = 300.0;

float readTemperature() {
    return random(20, 40) + 0.1 * random(0, 10); // Simulated temperature
}

float readHumidity() {
    return random(30, 90) + 0.1 * random(0, 10); // Simulated humidity
}

float readSmokeLevel() {
    return random(0, 500); // Simulated smoke level (ppm)
}

void updateSensorData() {
    temperature = readTemperature();
    humidity = readHumidity();
    smokeLevel = readSmokeLevel();
}

void displaySensorData() {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    Serial.print("Smoke Level: ");
    Serial.print(smokeLevel);
    Serial.println(" ppm");

    if (smokeLevel > SMOKE_THRESHOLD) {
        Serial.println("ALERT: High smoke levels detected!");
    }
}

void smokeAlertISR() {
    smokeAlert = true;
}
