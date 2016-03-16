#include "tictactoe.h"

using namespace std;

tictactoe::tictactoe()
{
	reset();
}

//Clear Table
void tictactoe::reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			grid[i][t] = ' ';
		}

	}
}