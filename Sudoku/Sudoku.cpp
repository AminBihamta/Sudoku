#include <iostream>
using namespace std;

void printBoard(int board[9][9]) {

	for (int i = 0; i < 9; i++)
	{
		if ((i) % 3 == 0 && i > 1)
			cout << "---------------------" << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}

		cout << '|' << " ";

		for (int j = 3; j < 6; j++)
		{
			cout << board[i][j] << " ";
		}

		cout << '|' << " ";

		for (int j = 6; j < 9; j++)
		{
			cout << board[i][j] << " ";
		}

		cout << endl;
	}

}

int main()
{
	int board[9][9];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			board[i][j] = NULL;
		}
	}

	printBoard(board);
}