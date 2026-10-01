#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    bool isSafe(vector<vector<char>>& board, int row, int col, char num)
    {
        // Check row
        for(int j = 0; j < 9; j++)
        {
            if(board[row][j] == num)
                return false;
        }

        // Check column
        for(int i = 0; i < 9; i++)
        {
            if(board[i][col] == num)
                return false;
        }

        // Find 3x3 box
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;

        // Check 3x3 box
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(board[startRow + i][startCol + j] == num)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board)
    {
        for(int row = 0; row < 9; row++)
        {
            for(int col = 0; col < 9; col++)
            {
                if(board[row][col] == '.')
                {
                    for(char num = '1'; num <= '9'; num++)
                    {
                        if(isSafe(board, row, col, num))
                        {
                            board[row][col] = num;

                            if(solve(board))
                                return true;

                            board[row][col] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    void solveSudoku(vector<vector<char>>& board)
    {
        solve(board);
    }
};


int main()
{
    vector<vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},

        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},

        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution obj;

    obj.solveSudoku(board);

    // Print solved Sudoku
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}