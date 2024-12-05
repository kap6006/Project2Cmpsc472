#ifndef SENSOR_H
#define SENSOR_H

// Functions to read sensor data
float readTemperature();
float readHumidity();
float readSmokeLevel();

// Functions to update and display sensor data
void updateSensorData();
void displaySensorData();

// Smoke alert ISR
extern volatile bool smokeAlert;
void smokeAlertISR();

#endif // SENSOR_H
