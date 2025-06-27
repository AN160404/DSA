#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int m = matrix.size();
    int n = matrix[0].size();
    int srow = 0, erow = m - 1;
    int scol = 0, ecol = n - 1;
    vector<int> arr;
    while (srow <= erow && scol <= ecol)
    {
        // Top
        for (int j = scol; j <= ecol; j++)
        {
            arr.push_back(matrix[srow][j]);
        }
        // Right
        for (int j = srow + 1; j <= erow; j++)
        {
            arr.push_back(matrix[j][ecol]);
        }
        // Bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            arr.push_back(matrix[erow][j]);
        }
        // Left
        for (int j = erow - 1; j >= srow + 1; j--)
        {
            if (scol == ecol)
            {
                break;
            }
            arr.push_back(matrix[j][scol]);
        }
        scol++;
        ecol--;
        srow++;
        erow--;
    }
    for(int val:arr){
        cout<<val<<endl;
    }
    return 0;
}
