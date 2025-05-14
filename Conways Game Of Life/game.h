#pragma once  
#include "cell.h"
#include <iostream>
#include <list>

class Game {  
public:  
	const int SCREEN_WIDTH = 1000;  
	const int SCREEN_HEIGHT = 1000;

	int run();
	int render();
	int update();
	int init();

private:  
	std::list<Cell> cells;
};
