CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c11

OBJ = src/main.o src/sensor.o src/csv_io.o src/utils.o

TARGET = sensor_sim

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
