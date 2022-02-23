#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Game.h"
#define _5sec 5000

int main(){
	Game start;
	while( start.gameover == false ){
		start.draw();
		usleep(_5sec);
	}	
	return 0;
}

