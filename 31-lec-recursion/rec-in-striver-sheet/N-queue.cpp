#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n)
{
    // 1. Check same column
    for(int i = 0; i < row; i++)
    {
        if(board[i][col] == 'Q')
        {
            return false;
        }
    }

    // 2. Check upper-left diagonal
    for(int i = row - 1, j = col - 1;
        i >= 0 && j >= 0;
        i--, j--)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
    }

    // 3. Check upper-right diagonal
    for(int i = row - 1, j = col + 1;
        i >= 0 && j < n;
        i--, j++)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}


void solve(vector<string>& board, int row, int n)
{
    // Base case
    if(row == n)
    {
        // Print solution
        for(int i = 0; i < n; i++)
        {
            cout << board[i] << endl;
        }

        cout << endl;

        return;
    }

    // Try every column
    for(int col = 0; col < n; col++)
    {
        // Check whether we can place queen
        if(isSafe(board, row, col, n))
        {
            // Place queen
            board[row][col] = 'Q';

            // Go to next row
            solve(board, row + 1, n);

            // Backtracking
            board[row][col] = '.';
        }
    }
}


int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    vector<string> board(n, string(n, '.'));

    solve(board, 0, n);

    return 0;
}