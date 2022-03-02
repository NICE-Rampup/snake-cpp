#ifndef SNAKE_H
#define SNAKE_H
#include <stdio.h>

class Snake{
public:
	void SetSnakeHead(int height, int width, char **screen);
	void SetSnakeTail(char **screen);
	void MoveSnakeHead(int height, int width, char **screen);
	void MoveTail(char **screen);
	int GetSnakeLength();
	int GetSnakeHead_X();
	int GetSnakeHead_Y();
private:
	int position_snakeHead_X;
	int position_snakeHead_Y;
	int position_snakeTail_X;
	int position_snakeTail_Y;
	int previous_positionX;
	int previous_positionY;
	int snake_length;
	enum Direction { STOP = 0, UP, DOWN, RIGHT, LEFT};
	Direction direction = STOP;
	const char symbol_head = 'o';
	const char symbol_tail = 'o';
};
#endif
