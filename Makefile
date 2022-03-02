CC = g++
CFLAGS = -Wall

all: main.o Frame.o Food.o Snake.o Game.o
	$(CC) $(CFLAGS) -o play main.o Frame.o Food.o Snake.o Game.o
	
main.o: main.cpp Game.h Snake.h Frame.h Food.h
	$(CC) $(CFLAGS) -c main.cpp
	
Game.o: Game.cpp Game.h Snake.h Frame.h Food.h
	$(CC) $(CFLAGS) -c Game.cpp
	
Snake.o: Snake.cpp Snake.h
	$(CC) $(CFLAGS) -c Snake.cpp
	
Frame.o: Frame.cpp Frame.h
	$(CC) $(CFLAGS) -c Frame.cpp
	
Food.o: Food.cpp Food.h
	$(CC) $(CFLAGS) -c Food.cpp

clean:
	rm *.o play

