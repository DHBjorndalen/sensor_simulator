#include "../include/sensor.h"
#include <time.h>
#include <stdlib.h>

int main(){
    srand((unsigned int)time(NULL));
    SensorReading reading1 = generate_reading(1);
    print_reading(reading1);
}