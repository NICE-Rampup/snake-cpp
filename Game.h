#ifndef Included_NameModel_H
#define Included_NameModel_H

#include<iostream>

class Game{
public:
	bool gameover = false;
	int height = 20 ;
	int width = 20 ;
	char ** screen;
	
	void draw(){
                for(int itr_height = 0 ; itr_height < height ; itr_height ++){
                        for (int itr_width = 0 ; itr_width < width ; itr_width ++){
                                printf("%c", screen[itr_width][itr_height]);
                        }
                        printf("\n");
                }
        }
};

#endif
