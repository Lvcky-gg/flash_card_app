OBJECTS = ./build/scan.o
INCLUDES = -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} ${OBJECTS} -g -o ./main

./build/scan.o: ./scan.c
	gcc scan.c ${INCLUDES} -o  ./build/scan.o -g -c

clean:
	rm -rf ./main
	rm -rf ${OBJECTS}



