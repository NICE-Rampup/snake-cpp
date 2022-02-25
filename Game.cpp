#include<stdio.h>
#include "Game.h"

Game::Game(){
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
	snake.set_snakeTail(screen);
}

Game::~Game(){
	for (int itr_height = 0; itr_height < height; itr_height++){
		delete [] screen[itr_height] ;
		delete [] screen ;
	}
}

void Game::draw(){
	system("clear");
	for(int itr_height = 0 ; itr_height < height ; itr_height ++){
		for (int itr_width = 0 ; itr_width < width ; itr_width ++){
			printf("%c", screen[itr_width][itr_height]);
		}
		printf("\n");
	}
}

bool Game::get_gameover(){
	return gameover;
}

void Game::increase_score(){
	score += 5;
}

int Game::get_score(){
	return score;
}
