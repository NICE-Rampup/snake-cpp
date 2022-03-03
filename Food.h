#ifndef FOOD_H
#define FOOD_H
#include <stdio.h>
#include <stdlib.h>

class Food{
public:
	void SpawnFood(int height, int width, char **screen);
	bool FoodEaten(int snakeHead_X, int snakeHead_Y);	
private:
	int position_foodX;
	int position_foodY;
	const char symbol = '*';
};
#endif
