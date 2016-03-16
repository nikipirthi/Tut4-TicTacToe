#pragma once\



#include <string>
#include <iostream>

using namespace std;

class tictactoe
{
private:
	int move; 
	char grid[3][3];

public:
	tictactoe();
	void reset();
	bool move(int, int);
	void print();


};





