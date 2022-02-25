#include <stdio.h>
#include "Snake.h"

void Snake::set_snakeHead(int height, int width, char ** screen){
	if( direction == STOP ){
		position_snakeHead_X = width / 2 ;
		position_snakeHead_Y = height / 2 ;
	}
	screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
}

void Snake::set_snakeTail(char ** screen){
		position_snakeTail_X = -- position_snakeHead_X ;
		position_snakeTail_Y = position_snakeHead_Y ;
		
		screen[position_snakeTail_X][position_snakeTail_Y] = symbol_tail ;
}

bool Snake::move_snakeHead(int height, int width, Direction direction, char ** screen){
	previous_positionX = position_snakeHead_X;
	previous_positionY = position_snakeHead_Y;
	if( direction == UP ){
		position_snakeHead_Y = ++ position_snakeHead_Y ;
		/*hit upper wall snake die*/
		if( position_snakeHead_Y == width - 1 ){
			return true;	
		}
		/*snake bites tail die*/
		if( screen[position_snakeHead_X][position_snakeHead_Y] == symbol_tail ){
			return true;
		}
	}
	if( direction == DOWN ){
		position_snakeHead_Y = -- position_snakeHead_Y ;
		/*hit lower wall snake die*/
		if( position_snakeHead_Y == 0 ){
			return true;
		}
		/*snake bites tail die*/
		if( screen[position_snakeHead_X][position_snakeHead_Y] == symbol_tail ){
			return true;
		}
	}
	if( direction == RIGHT ){
		position_snakeHead_X = ++ position_snakeHead_X ;
		/*hit right wall snake die*/
		if( position_snakeHead_X == height -1 ){
			return true;
		}
		/*snake bites tail die*/
		if( screen[position_snakeHead_X][position_snakeHead_Y] == symbol_tail ){
			return true;
		}
	}
	if( direction == LEFT ){
		position_snakeHead_X = -- position_snakeHead_X ;
		/*hit left wall snake die*/
		if( position_snakeHead_X == 0 ){
			return true;
		}
		/*snake bites tail die*/
		if( screen[position_snakeHead_X][position_snakeHead_Y] == symbol_tail ){
			return true;
		}
	}
	screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
}

void Snake::move_tail(char ** screen){
	/*Swap positions of snaketail and previous*/
	position_snakeTail_X = position_snakeTail_X + previous_positionX ;
	previous_positionX = position_snakeTail_X - previous_positionX ;
	position_snakeTail_X = position_snakeTail_X - previous_positionX ;
	
	position_snakeTail_Y = position_snakeTail_Y + previous_positionY ;
	previous_positionY = position_snakeTail_Y - previous_positionY ;
	position_snakeTail_Y = position_snakeTail_Y - previous_positionY ;
	
	screen[position_snakeTail_X][position_snakeTail_Y] = symbol_tail ;
}	

int Snake::get_snakeLength(){
	return snake_length;
}
