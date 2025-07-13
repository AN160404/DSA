#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool valid(vector<vector<int>> &grid, int row, int col, int n, int value)
{
    if (row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != value)
        return false;

    if (value == ((n*n) - 1))
        return true;

    bool ans1 = valid(grid, row + 1, col + 2, n, value + 1);
    bool ans2 = valid(grid, row + 1, col - 2, n, value + 1);
    bool ans3 = valid(grid, row - 1, col + 2, n, value + 1);
    bool ans4 = valid(grid, row - 1, col - 2, n, value + 1);
    bool ans5 = valid(grid, row + 2, col + 1, n, value + 1);
    bool ans6 = valid(grid, row + 2, col - 1, n, value + 1);
    bool ans7 = valid(grid, row - 2, col + 1, n, value + 1);
    bool ans8 = valid(grid, row - 2, col - 1, n, value + 1);

    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
}

int main()
{
    vector<vector<int>> grid = {{0, 11, 16, 5, 20}, {17, 4, 19, 10, 15}, {12, 1, 8, 21, 6}, {3, 18, 23, 14, 9}, {24, 13, 2, 7, 22}};
    int value = 0;
    int row = 0, col = 0;
    int n = grid.size();

    bool ans = valid(grid, row, col, n, value);
    cout<<ans;
}
