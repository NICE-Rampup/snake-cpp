CC = g++

all: main.o Frame.o Food.o Snake.o Game.o
	$(CC) -o play main.o Frame.o Food.o Snake.o Game.o
	
main.o: main.cpp Game.h Snake.h Frame.h Food.h
	$(CC) -c main.cpp
	
Game.o: Game.cpp Game.h Snake.h Frame.h Food.h
	$(CC) -c Game.cpp
	
Snake.o: Snake.cpp Snake.h
	$(CC) -c Snake.cpp
	
Frame.o: Frame.cpp Frame.h
	$(CC) -c Frame.cpp
	
Food.o: Food.cpp Food.h
	$(CC) -c Food.cpp

clean:
	rm *.o play

