#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
        for (int i = 0; i < 9; i++) {
            // Check row and column
            if (board[row][i] == num || board[i][col] == num)
                return false;
        }

        // Check 3x3 box
        int startRow = row - row % 3; // 1 - 1%3 = 1st row
        int startCol = col - col % 3; // 5 - 5%3 = 3rd column
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startRow + i][startCol + j] == num)
                    return false;
            }
        }
        return true;
    }

    bool solver(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char num = '1'; num <= '9'; num++) {
                        if (isSafe(board, i, j, num)) {
                            board[i][j] = num;
                            if (solver(board)) return true;  // Continue recursively
                            board[i][j] = '.';  // Backtrack
                        }
                    }
                    return false;  // No valid number found
                }
            }
        }
        return true;  // All cells filled correctly
    }

int main(){
    vector<vector<char>> board = {
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

    solver(board);
    cout<<endl<<"----------------------------------"<<endl;
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            cout<<board[i][j]<<" | ";
        }
        cout<<endl<<"----------------------------------"<<endl;
    }
    
}