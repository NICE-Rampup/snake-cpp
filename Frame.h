#include<stdlib.h>

#include<iostream>

using namespace std;

bool gameover = 0;

class Frame{
	public:
	const int height = 50;
	const int width = 50;
	int score = 0;
		
	void draw(){
	     system("clear");
	     for (int itr = 0; itr < width + 2; itr++){
		printf("#");
	     }
	     printf("\n");
             for (int itr = 0; itr < width; itr++){
		for (int itr1 = 0; itr1 < width; itr1++){
		    if (itr1 == 0){
			printf("#");
		    }
		    printf(" ");
		    if (itr1 == width - 1){
			printf("#");
		    }
		}
		printf("\n");
 	     }
	     for (int itr = 0; itr < width + 2; itr++){
		printf("#");
	     }
	     printf("\n");
	     printf("Score: %d \n", score);
	}
};
