#include "Board.h"

void Board::drawBoard()
{
	using namespace std;

	cout << playerid << endl;

			for (int j = 0; j < this->size; j++) 
			{
				for (int i = 0; i < this->size * this->size; i++)
				{
					if (j % 3 == 0)
					{
						cout << "|_ " << this->boardMemory[j][i] << " _|_ ";
					}
					else if (j % 3 == 2)
					{
						cout << this->boardMemory[j][i] << " _|\n";
					}
					else
					{
						cout << this->boardMemory[j][i] << " _|_ ";
					}
				}
			}
			
		
}
	

Board::Board()
{
	this->size = 3;
	this->rowWin = 3;
	for (int i = 0; i < this->size; i++)
	{
		this->boardMemory.resize(size);
		for(int j = 0; j < this->size; j++)
		this->boardMemory[i].push_back(0);
	}
	this->winBool = false;
}

Board::Board(int _size)
{
	this->size = 3;
	this->rowWin = 3;
	for (int i = 0; i < this->size; i++)
	{
		this->boardMemory.resize(size);
		for (int j = 0; j < this->size; j++)
			this->boardMemory[i].push_back(0);
	}
	this->winBool = false;
}

Board::~Board()
{
	this->boardMemory.clear();
}

void Board::playerMove()
{
	using namespace std;
	bool isPlaced = false;
	int placeonboard1;
	int placeonboard2;
	

	while (!isPlaced)
	{	
		cout << "WprowadŸ po³o¿enie poz1 i poz2 " << endl;
		cin >> placeonboard1;
		cin >> placeonboard2;

		switch (placeonboard1)
		{
		default:
			if (placeonboard1 > this->size)
			{
				isPlaced = false;
			}
			if (this->boardMemory[placeonboard1 - 1][placeonboard2-1] == 0)
			{
				this->boardMemory[placeonboard1 - 1][placeonboard2-1] = playerid;
				isPlaced = true;
				break;
			}
			else
			{
				isPlaced = false;
			}
		}

	}
}

bool Board::wincheck()
{

	
		for (int collumnIter = 0; collumnIter < this->size; collumnIter++)
		{
			for (int rowIter = 0; rowIter<this->size; rowIter++ )
			{
				
			}
		}
	
}

void Board::mainRoutine()
{	
	drawBoard();
	int moveid = 0;
	playerid = 1 + rand() % 2;
	while(1)
	{
		
		if (playerid==1)
		{
			moveid++;
			playerMove();
			this->winBool = this->wincheck();
			drawBoard();
			playerid = 2;
			if (winBool==true)
			{
				break;
			}
			if(moveid==9)
			{
				break;
			}
			
		}
		else if (playerid==2)
		{
			moveid++;
			playerMove();
			this->winBool = this->wincheck();
			drawBoard();
			playerid = 1;
			if (winBool == true)
			{
				break;
			}
			if (moveid == 9)
			{
				break;
			}
		}
	}
}
