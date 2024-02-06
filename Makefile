OBJECTS = ./build/scan.o ./build/make_directory.o ./build/search_directories.o
INCLUDES = -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} ${OBJECTS} -g -o ./main

./build/scan.o: ./scan.c
	gcc scan.c ${INCLUDES} -o  ./build/scan.o -g -c

./build/make_directory.o: ./make_directory.c
	gcc make_directory.c ${INCLUDES} -o ./build/make_directory.o -g -c
./build/search_directories.o: ./search_directories.c
	gcc search_directories.c ${INCLUDES} -o ./build/search_directories.o -g -c

clean:
	rm -rf ./main
	rm -rf ${OBJECTS}



