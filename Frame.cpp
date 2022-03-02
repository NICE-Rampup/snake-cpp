#include<stdio.h>
#include "Frame.h"

void Frame::SetFrame(int height, int width, char **screen){
	for(int itr_height = 0 ; itr_height < height ; itr_height ++){
		for (int itr_width = 0 ; itr_width < width ; itr_width ++){
			if(itr_height == 0 || itr_height == height - 1){
				screen[itr_width][itr_height] = symbol_wall ;
			}
			else if(itr_width == 0 || itr_width == width -1){
				screen[itr_width][itr_height] = symbol_wall ;
			}
			else{
			// Added this line so that screen[][] dont have any random value.
				screen[itr_width][itr_height] = symbol_empty ;
			}
		}
	}
}
