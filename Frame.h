#include <stdio.h>
#include "Game.h"

class Frame : public Game {
private:
	char symbol_wall = '#' ;
	char symbol_empty = ' ';
public:
	Frame(){
		set_frame();
	}
	void set_frame(){
		int itr_height = 0;
		for( int itr_width = 0 ; itr_width <= width ; itr_width ++){
			screen[itr_width][itr_height] = symbol_wall ;
		}
		itr_height ++ ;
		for( int itr_width = 0 ; itr_width <= width && itr_height != height ; itr_width ++){
			if( itr_width == 0 ){
				screen[itr_width][itr_height] = symbol_wall ;
			}
			else if ( itr_width == width){
				screen[itr_width][itr_height] = symbol_wall ;
				itr_height ++ ;
			}
			else{
				screen[itr_width][itr_height] = symbol_empty ;
			}
		}
		for( int itr_width = 0 ; itr_width <= width ; itr_width ++){
			screen[itr_width][itr_height] = symbol_wall ;
		}
	}
};
