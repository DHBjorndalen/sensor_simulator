#include "../include/sensor.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

float temperature;
float humidity;
time_t now;
struct tm *timeinfo;
char timestamp[20];

float generate_random_float(float min, float max) {
    float random_val = (float)rand() / RAND_MAX;

    return min + random_val * (max - min);
}

SensorReading generate_reading(int id) {
    float temperature = generate_random_float(20.0, 30.0);
    float humidity = generate_random_float(30.0, 60.0);
    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);

    SensorReading reading;
    reading.id = id;
    reading.temperature = temperature;
    reading.humidity = humidity;
    strftime(reading.timestamp, sizeof(reading.timestamp), "%Y-%m-%d %H:%M", tm_info);

    return reading;
}

void print_reading(SensorReading reading) {
    printf("Reading ID: %d\n", reading.id);
    printf("Temperature: %.2f %sC\n", reading.temperature, "\xB0");
    printf("Humidity: %.2f %%\n", reading.humidity);
    printf("Timestamp: %s\n", reading.timestamp);
}