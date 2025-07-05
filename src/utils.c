#include "../include/utils.h"
#include "../include/sensor.h"
#include <stdlib.h>
#include <stdio.h>

float generate_random_float(float min, float max) {
    float random_val = (float)rand() / RAND_MAX;

    return min + random_val * (max - min);
}

void print_reading(SensorReading reading) {
    printf("Reading ID: %d\n", reading.id);
    printf("Temperature: %.2f %sC\n", reading.temperature, "\xB0");
    printf("Humidity: %.2f %%\n", reading.humidity);
    printf("Timestamp: %s\n", reading.timestamp);
}