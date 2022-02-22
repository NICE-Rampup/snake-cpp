#include <stdio.h>
#include "Game.h"

class Snake : public Game {
private:
	int position_snakeHead_X;
	int position_snakeHead_Y;
	enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN};
	Direction direction = STOP;
	char symbol_head = 'o';
public:
	Snake(){
		set_snakeHead();
	}
	void set_snakeHead(){
		if( direction == STOP ){
			position_snakeHead_X = width / 2 ;
			position_snakeHead_Y = height / 2 ;
		}
		screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
}
};
