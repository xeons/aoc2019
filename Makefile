CC=g++
CFLAGS=-Wall
SRC_DIR=src
OUTPUT_DIR=output

all: day1 day2

day1:
	$(CC) $(CFLAGS) $(SRC_DIR)/day1.cpp -o $(OUTPUT_DIR)/$@

day2:
	$(CC) $(CFLAGS) $(SRC_DIR)/day2.cpp -o $(OUTPUT_DIR)/$@

clean:
	rm $(OUTPUT_DIR)/*
