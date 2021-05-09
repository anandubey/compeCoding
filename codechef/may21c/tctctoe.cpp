#include <bits/stdc++.h>

using namespace std;

int count_underscores(vector<vector<char>> &board);
int count_wins(vector<vector<char>> &board);
bool is_win(char a, char b, char c);

// Counts all _ in the board
int count_underscores( vector<vector<char>> &board)
{
    int count=0;
    for (int i=0; i < 3; i++)
    {
        for (int j=0; j < 3; j++)
        {
            if (board[i][j] == '_')
            {
                count++;
            }
        }
    }
    return count;
}

bool is_win(char a, char b, char c)
{
    bool res=false;
    if (a != '_')
    {
        res = (a == b) ? (b == c ? true : false) : false;
    }
    return res;
}

int count_wins(vector<vector<char>> &board)
{
    int wins=0;
    if (is_win(board[0][0], board[0][1], board[0][2]))
    {
        wins++;
    }
    if (is_win(board[1][0], board[1][1], board[1][2]))
    {
        wins++;
    }
    if (is_win(board[2][0], board[2][1], board[2][2]))
    {
        wins++;
    }
    if (is_win(board[0][0], board[1][0], board[2][0]))
    {
        wins++;
    }
    if (is_win(board[0][1], board[1][1], board[2][1]))
    {
        wins++;
    }
    if (is_win(board[0][2], board[1][2], board[2][2]))
    {
        wins++;
    }
    if (is_win(board[0][0], board[1][1], board[2][2]))
    {
        wins++;
    }
    if (is_win(board[0][2], board[1][1], board[2][0]))
    {
        wins++;
    }

    return wins;
}

int main()
{
	int t;
	vector <vector <char>> board {
	    {'_', '_', '_'},
	    {'_', '_', '_'},
	    {'_', '_', '_'}
	};

	cin >> t;
	vector <int> res;

	while (t--)
	{
	    for (int i=0; i < 3; i++)
	    {
	        for (int j=0; j < 3; j++)
	        {
	            cin >> board[i][j];
	        }
	    }

	    int no_of_us = count_underscores(board);
	    int no_of_wins = count_wins(board);

	    if (no_of_us == 0)
	    {
	        res.push_back(3);
	    }
	    else if (no_of_wins > 1)
	    {
	        res.push_back(3);
	    }
	    else if (no_of_wins == 1 && no_of_us < 5)
	    {
	        res.push_back(1);
	    }
	    else
	    {
	        res.push_back(2);
	    }

	}

	for (int i:res)
	{
	    cout << i << '\n';
	}
	return 0;
}
