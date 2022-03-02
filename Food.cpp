#include<stdio.h>
#include "Food.h"

void Food::SpawnFood(int height, int width, char **screen){
	position_foodX = rand() % width;
	position_foodY = rand() % height;

	screen[position_foodX][position_foodY] = symbol ;
}

bool Food::FoodEaten(int snakeHead_X, int snakeHead_Y){
	if(snakeHead_X == position_foodX && snakeHead_Y == position_foodY)
		return true;
	else 
		return false;
}
