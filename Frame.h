#ifndef FRAME_H
#define FRAME_H
#include <stdio.h>

class Frame{
public:
	void set_frame(int height, int width, char **screen);
private:
	const char symbol_wall = '#' ;
	const char symbol_empty = ' ';
};
#endif
