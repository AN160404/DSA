#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> grid = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};

    int n = grid.size();
    vector<int> hash(n * n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            hash[grid[i][j]]++;
        }
    }
    int dou = -1, missing = -1;
    for (int i = 1; i <= n * n; i++)
    {

        if (hash[i] == 2)
        {
            dou = i;
        }
        else if (hash[i] == 0)
        {
            missing = i;
        }
    }

    cout << dou << " is double" << endl;
    cout << missing << " is missing" << endl;
}