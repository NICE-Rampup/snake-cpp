#include <stdio.h>
#include "Snake.h"

void Snake::SetSnakeHead(int height, int width, char **screen){
	if( direction == STOP ){
		position_snakeHead_X = width / 2 ;
		position_snakeHead_Y = height / 2 ;
	}
	screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
}

void Snake::SetSnakeTail(char **screen){
		position_snakeTail_X = -- position_snakeHead_X ;
		position_snakeTail_Y = position_snakeHead_Y ;
		
		screen[position_snakeTail_X][position_snakeTail_Y] = symbol_tail ;
}

void Snake::MoveSnakeHead(int height, int width, char **screen){
	previous_positionX = position_snakeHead_X;
	previous_positionY = position_snakeHead_Y;
	if( direction == UP ){
		position_snakeHead_Y ++ ;
	}
	if( direction == DOWN ){
		position_snakeHead_Y -- ;
	}
	if( direction == RIGHT ){
		position_snakeHead_X ++ ;
	}
	if( direction == LEFT ){
		position_snakeHead_X -- ;
	}
	screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
}

void Snake::MoveTail(char **screen){
	/*Swap positions of snaketail and previous*/
	position_snakeTail_X = position_snakeTail_X + previous_positionX ;
	previous_positionX = position_snakeTail_X - previous_positionX ;
	position_snakeTail_X = position_snakeTail_X - previous_positionX ;
	
	position_snakeTail_Y = position_snakeTail_Y + previous_positionY ;
	previous_positionY = position_snakeTail_Y - previous_positionY ;
	position_snakeTail_Y = position_snakeTail_Y - previous_positionY ;
	
	screen[position_snakeTail_X][position_snakeTail_Y] = symbol_tail ;
}	

int Snake::GetSnakeLength(){
	return snake_length;
}

int Snake::GetSnakeHead_X(){
	return position_snakeHead_X;
}

int Snake::GetSnakeHead_Y(){
	return position_snakeHead_Y;
}
