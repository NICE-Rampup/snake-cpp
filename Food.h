#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

class Food : public Game {
private:
	int position_foodX;
	int position_foodY;
	char symbol = '*';
public:
	Food(){
		spawn_food();
	}
	void spawn_food(){
		position_foodX = rand() % width;
		position_foodY = rand() % height;

		screen[position_foodX][position_foodY] = symbol ;
	}
};
