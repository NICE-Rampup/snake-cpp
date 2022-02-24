#include <stdio.h>
#include <stdlib.h>

class Game;

class Food{
private:
	int position_foodX;
	int position_foodY;
	char symbol = '*';
public:
	void spawn_food(int height, int width, char ** screen){
		position_foodX = rand() % width;
		position_foodY = rand() % height;

		screen[position_foodX][position_foodY] = symbol ;
	}	
};
