#include <stdio.h>
#include <stdlib.h>
#include "Frame.h"
#include "Snake.h"
#include "Food.h"
#include "Game.h"

int main(){
	Game start;
	while(start.gameover != false){
		start.draw();
	}	
	return 0;
}

