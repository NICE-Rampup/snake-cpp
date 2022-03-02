#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Game.h"
#define _5sec 5000

int main(){
	Game start;
	while( start.GetGameover() == false ){
		start.Draw();
		usleep(_5sec);
	}
	printf(".....GAMEOVER.....\n\nYour Score is %d", start.GetScore());	
	return 0;
}

