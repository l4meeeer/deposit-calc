all: main

main: build/src/main.o build/src/deposit.o
	gcc -Wall -Werror -o bin/main build/src/main.o build/src/deposit.o

build/src/main.o: src/main.c
	gcc -Wall -Werror -o build/src/main.o -c src/main.c

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -o build/src/deposit.o -c src/deposit.c

.PHONY: clean

clean:
	rm -rf build/src/*.o
