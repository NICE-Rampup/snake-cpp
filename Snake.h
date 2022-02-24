#include <stdio.h>

class Game;

class Snake{
private:
	int position_snakeHead_X;
	int position_snakeHead_Y;
	int position_snakeTail_X;
	int position_snakeTail_Y;
	enum Direction { STOP = 0, UP, DOWN, RIGHT, LEFT};
	Direction direction = STOP;
	char symbol_head = 'o';
	char symbol_tail = 'o';
public:
	void set_snakeHead(int height, int width, char ** screen){
		if( direction == STOP ){
			position_snakeHead_X = width / 2 ;
			position_snakeHead_Y = height / 2 ;
		}
		screen[position_snakeHead_X][position_snakeHead_Y] = symbol_head ;
	}
	void set_snakeTail(int height, int width, char ** screen){
			position_snakeTail_X = -- position_snakeHead_X ;
			position_snakeTail_Y = position_snakeHead_Y ;
			
			screen[position_snakeTail_X][position_snakeTail_Y] = symbol_tail ;
	}
	bool move_snakeHead(int height, int width, Direction direction, char ** screen){
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
};
