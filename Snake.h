#include <stdio.h>

class Snake{
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
	char symbol_head = 'o';
	char symbol_tail = 'o';
public:
	void set_snakeHead(int height, int width, char ** screen);
	void set_snakeTail(char ** screen);
	bool move_snakeHead(int height, int width, Direction direction, char ** screen);
	void move_tail(char ** screen);
	int get_snakeLength();
};
