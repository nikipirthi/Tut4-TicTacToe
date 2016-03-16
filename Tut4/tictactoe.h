#pragma once\



#include <string>
#include <iostream>

using namespace std;

class tictactoe
{
private:
	int move; 
	char player;
	char grid[3][3];

public:
	tictactoe();
	void reset();
	bool move(int, int);
	void print();
	bool over();
	char wincheck(char);
	~tictactoe();


};
int main()
{
	tictactoe myGame;
	int x;
	int y;
	cout << "Welcome to Tic Tac Toe" << endl;
	while (true)
	{
		myGame.print();
		cout << "Enter Collum";
		cin >> x;
		cout << "Enter Row";
		cin >> y;
		bool play = myGame.move(x, y);

	}
}






