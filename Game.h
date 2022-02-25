#include<iostream>
#include "Frame.h"
#include "Snake.h"
#include "Food.h"

class Game{
private:
	int height = 20 ;
	int width = 20 ;
	char ** screen;
	bool gameover = false;
	int score = 0;
public:
	Game();
	~Game();
	void draw();
	bool get_gameover();
	void increase_score();
	int get_score();
};

