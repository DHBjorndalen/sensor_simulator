#ifndef SENSOR_H
#define SENSOR_H

typedef struct {
    int id;
    float temperature;
    float humidity;
    char timestamp[20];
} SensorReading;

SensorReading generate_reading(int id);
void print_reading(SensorReading reading);
float generate_random_float(float min, float max);

#endif
