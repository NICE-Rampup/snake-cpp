# $(CC) = g++ not working with g++

all: main.cpp Game.h Frame.h Food.h Snake.h
	g++ -o play main.cpp

Clean:
	rm *.o play

