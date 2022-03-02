#ifndef GAME_H
#define GAME_H
#include<iostream>
#include "Frame.h"
#include "Snake.h"
#include "Food.h"

class Game{
public:
	Game();
	~Game();
	void draw();
	bool get_gameover();
	void increase_score();
	int get_score();
private:
	int height = 20 ;
	int width = 20 ;
	const char **screen;
	int snakeHead_X;
	int snakeHead_Y;
	bool gameover = false;
	int score = 0;
	int tail_Length = 0;
};
#endif
