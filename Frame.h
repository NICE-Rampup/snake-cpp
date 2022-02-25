#include <stdio.h>

class Frame{
private:
	char symbol_wall = '#' ;
	char symbol_empty = ' ';
public:
	void set_frame(int height, int width, char ** screen);
};
