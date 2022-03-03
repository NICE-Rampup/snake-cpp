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
	void Draw();
	bool GetGameover();
	void IncreaseScore();
	int GetScore();
private:
	int height = 20 ;
	int width = 20 ;
	char **screen;
	int snakeHead_X;
	int snakeHead_Y;
	bool gameover = false;
	int score = 0;
	int tail_Length = 0;
};
#endif
