// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void print();
bool checkWin();
void checkPlayer(char c);
char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int player = 1;

int main()
{   
	char choice;
	bool win = false;	
	char mark;
	
	cout << "Player 1 - x" << " vs " << "Player 2 - o" <<  endl;
	do
	{
		print();
		if (player % 2)
		{
			player = 1;
		}
		else
		{
			player = 2;
		}

		cout << "player " << player << ", enter choice: ";
		cin >> choice;
		for (int i = 0; i < sizeof(board); i++)
		{
			if (choice == board[i])
			{
				if (player == 1)
				{
					mark = 'x';
				}
				else
				{
					mark = 'o';
				}
				board[i] = mark;
			}
		}

		win = checkWin();
		player++;
	} while (win);
	print();
}

bool checkWin()
{
	if ((board[0] == board[1]) && (board[1] == board[2]))
	{
		checkPlayer(board[0]);
		return false;
	}
	if ((board[3] == board[4]) && (board[4] == board[5]))
	{
		checkPlayer(board[3]);
		return false;
	}
	if ((board[6] == board[7]) && (board[7] == board[8]))
	{
		checkPlayer(board[6]);
		return false;
	}
	if ((board[0] == board[3]) && (board[3] == board[6]))
	{
		checkPlayer(board[0]);
		return false;
	}
	if ((board[1] == board[4]) && (board[4] == board[7]))
	{
		checkPlayer(board[1]);
		return false;
	}
	if ((board[2] == board[5]) && (board[5] == board[8]))
	{
		checkPlayer(board[2]);
		return false;
	}
	if ((board[0] == board[4]) && (board[4] == board[8]))
	{
		checkPlayer(board[0]);
		return false;
	}
	if ((board[2] == board[4]) && (board[4] == board[6]))
	{
		checkPlayer(board[2]);
		return false;
	}
	if ((board[0] != '1') && (board[1] != '2') && (board[2] != '3')
		&& (board[3] != '4') && (board[4] != '5') && (board[5] != '6')
		&& (board[6] != '7') && (board[7] != '8') && (board[8] != '9'))
	{
		cout << "game draw";
		return false;
	}
}

void checkPlayer(char c) 
{
	if (c == 'x')
	{
		cout << "player 1 win game" << endl;
	}
	else
	{
		cout << "player 2 win game" << endl;
	}
}

void print() 
{
	int count = 0;
	for (int i = 0; i < sizeof(board); i++)
	{
		cout << board[i] << " ";
		count++;
		if (count % 3 == 0)
		{
			cout << endl;
		}
	}
}


