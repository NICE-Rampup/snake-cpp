#include<stdio.h>
#include "Food.h"

void Food::spawn_food(int height, int width, char ** screen){
	position_foodX = rand() % width;
	position_foodY = rand() % height;

	screen[position_foodX][position_foodY] = symbol ;
}
