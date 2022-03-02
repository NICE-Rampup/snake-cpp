#ifndef FRAME_H
#define FRAME_H
#include <stdio.h>

class Frame{
public:
	void set_frame(int height, int width, char **screen);
private:
	char symbol_wall = '#' ;
	char symbol_empty = ' ';
};
#endif
