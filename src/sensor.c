#include "../include/sensor.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

float temperature;
float humidity;
time_t now;
struct tm *timeinfo;
char timestamp[20];

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

