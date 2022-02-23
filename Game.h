#ifndef Included_NameModel_H
#define Included_NameModel_H

#include<iostream>
#include "Frame.h"
#include "Snake.h"
#include "Food.h"

class Game{
private:
	int height = 20 ;
	int width = 20 ;
	char ** screen;
public:
	bool gameover = false;
	Game(){
		screen = new char * [height];
		for (int itr_height = 0; itr_height < height; itr_height++) {
		    screen[itr_height] = new char[width];
		}
		Frame frame;
		Food food;
		Snake snake;
		frame.set_frame(height, width, screen);
		food.spawn_food(height, width, screen);
		snake.set_snakeHead(height, width, screen);
	}
	void draw(){
		system("clear");
		for(int itr_height = 0 ; itr_height < height ; itr_height ++){
			for (int itr_width = 0 ; itr_width < width ; itr_width ++){
				printf("%c", screen[itr_width][itr_height]);
			}
			printf("\n");
		}
	}
};

#endif
