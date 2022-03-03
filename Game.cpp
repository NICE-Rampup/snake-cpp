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
	frame.SetFrame(height, width, screen);
	food.SpawnFood(height, width, screen);
	snake.SetSnakeHead(height, width, screen);
	snake.SetSnakeTail(screen);
}

Game::~Game(){
	for (int itr_height = 0; itr_height < height; itr_height++){
		delete [] screen[itr_height] ;
		delete [] screen ;
	}
}

void Game::Draw(){
	system("clear");
	for(int itr_height = 0 ; itr_height < height ; itr_height ++){
		for (int itr_width = 0 ; itr_width < width ; itr_width ++){
			printf("%c", screen[itr_width][itr_height]);
		}
		printf("\n");
	}
}

bool Game::GetGameover(){
	return gameover;
}

void Game::IncreaseScore(){
	score += 5;
}

int Game::GetScore(){
	return score;
}
