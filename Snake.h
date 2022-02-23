#include <stdio.h>

class Game;

class Snake{
private:
	int position_snakeHead_X;
	int position_snakeHead_Y;
	enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN};
	Direction direction = STOP;
	char symbol_head = 'o';
public:
	void set_snakeHead(int height, int width, char ** screen){
		if( direction == STOP ){
			position_snakeHead_X = width / 2 ;
			position_snakeHead_Y = height / 2 ;
		}
		screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
	}
};
