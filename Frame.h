#include <stdio.h>

class Game;

class Frame{
private:
	char symbol_wall = '#' ;
	char symbol_empty = ' ';
public:
	void set_frame(int height, int width, char ** screen){
		int itr_height = 0;
		
		for( int itr_width = 0 ; itr_width < width ; itr_width ++){
			screen[itr_width][itr_height] = symbol_wall ;
		}
		itr_height ++ ;
		for( int itr_width = 0 ; itr_width < width && itr_height != height-1 ; itr_width ++){
			if( itr_width == 0 ){
				screen[itr_width][itr_height] = symbol_wall ;
			}
			else if ( itr_width == width-1){
				screen[itr_width][itr_height] = symbol_wall ;
				itr_height ++ ;
				itr_width = -1;
			}
			else{
				screen[itr_width][itr_height] = symbol_empty ;
			}
		}
		for( int itr_width = 0 ; itr_width < width ; itr_width ++){
			screen[itr_width][itr_height] = symbol_wall ;
		}
	}
};
