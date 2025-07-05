# Sensor Simulator

A small command-line C program to simulate sensor readings and save them to a CSV file.

## Features

- Modular codebase with headers and source files
- Simulates sensor data (temperature, humidity, timestamp)
- Writes/reads CSV data
- Command-line interface for generating and viewing readings

## File Structure
```
sensor_simulator/
├── include/
│ ├── sensor.h
│ ├── csv_io.h
│ └── utils.h
├── src/
│ ├── sensor.c
│ ├── csv_io.c
│ └── main.c
├── data/
│ └── readings.csv
└── Makefile
```

## Build Instructions

```bash
make
```
This will produce the executable sensor_sim.

## Usage

Generate 10 random readings:

```bash
./sensor_sim generate 10
```
Show CSV contents:

```bash
./sensor_sim show
```

## Requirements
* GCC or Clang
* Make

## License
MIT