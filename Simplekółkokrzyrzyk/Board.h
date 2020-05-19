#pragma once

#include <vector>
#include <iostream>

class Board
{
	std::vector<std::vector<int>> boardMemory;
	bool winBool=false;
	int size ;
	int playerid;
	int rowWin;
public:
	void drawBoard();
	Board();
	Board(int size);
	~Board();
	void playerMove();
	bool wincheck();
	void mainRoutine();
};

