#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void helper(vector<vector<int>> &maze, int row, int col, int n,
            vector<vector<bool>> &visited, string s, set<string> &uniquePaths)
{
    // Boundary and obstacle checks
    if (row < 0 || col < 0 || row >= n || col >= n ||
        maze[row][col] == 0 || visited[row][col])
    {
        return;
    }

    // Goal reached
    if (row == n - 1 && col == n - 1)
    {
        uniquePaths.insert(s);
        return;
    }

    visited[row][col] = true;

    // Explore all directions in lex order
    helper(maze, row + 1, col, n, visited, s + 'D', uniquePaths); // Down
    helper(maze, row, col - 1, n, visited, s + 'L', uniquePaths); // Left
    helper(maze, row, col + 1, n, visited, s + 'R', uniquePaths); // Right
    helper(maze, row - 1, col, n, visited, s + 'U', uniquePaths); // Up

    visited[row][col] = false; // Backtrack
}

int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    int n = maze.size();
    string s;
    set<string> uniquePaths;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    helper(maze, 0, 0, n, visited, s, uniquePaths);

    // Output paths in sorted order
    for (const string &path : uniquePaths)
    {
        cout << path << endl;
    }

    return 0;
}
