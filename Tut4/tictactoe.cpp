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

bool tictactoe::move(int x, int y)
{
	if (grid[x][y] != ' ')
	{
		if (int i = 1)
		{
			grid[x][y] = 'x';
		}
		else
		{
			grid[x][y] = 'o';
		}
		return true;
	}
	else
	{
		return false;
	}
}

void tictactoe::print()
{
	for (int i = 0; i < 3; i++)
	{
		for (int t = 0; t < 3; t++)
		{
			cout << grid[i][t] << " " << endl;
		}
		cout << endl;
	}
}