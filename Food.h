#include <stdio.h>
#include <stdlib.h>

class Food{
private:
	int position_foodX;
	int position_foodY;
	char symbol = '*';
public:
	void spawn_food(int height, int width, char ** screen);	
};
