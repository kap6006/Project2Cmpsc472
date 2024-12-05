#include <Arduino.h>
#include "error_handling.h"

void simulateMemoryManagement() {
    int* sensorData = (int*)malloc(sizeof(int));
    if (sensorData != NULL) {
        *sensorData = random(0, 1024); // Simulated memory data
        Serial.print("Simulated Memory Data: ");
        Serial.println(*sensorData);
        free(sensorData);
    } else {
        handleMemoryError();
    }
}

void handleMemoryError() {
    Serial.println("Error: Memory allocation failed! Attempting recovery...");
}

void triggerAlert() {
    Serial.println("ALERT: Smoke detected by ISR! Immediate action required.");
}
