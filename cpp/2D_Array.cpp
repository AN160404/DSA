#include <iostream>
#include <vector>
using namespace std;

int rowSearch(vector<vector<int>> &matrix, int row, int target)
{
    int size = matrix[0].size();
    int st = 0, end = size - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (matrix[row][mid] == target)
        {
            return mid;
        }
        else if (matrix[row][mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;  // Return -1 if not found
}

int main()
{
<<<<<<< HEAD
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
=======
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int target = 3;

    int m = matrix.size();
    int n = matrix[0].size();
    int i = 0, j = m - 1;
    int pos = -1, mid = -1;
    bool found = false;

    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (matrix[mid][0] <= target && matrix[mid][n - 1] >= target)
        {
            pos = rowSearch(matrix, mid, target);
            if (pos != -1)
            {
                found = true;
            }
            break;  // No need to continue after finding correct row
        }
        else if (target > matrix[mid][n - 1])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
>>>>>>> 42ec782e30479d0068033681d06776a137b96a18
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
<<<<<<< HEAD
    for(int val:arr){
        cout<<val<<endl;
    }
=======

    if (found)
    {
        cout << "Exists at row " << mid << ", column " << pos << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

>>>>>>> 42ec782e30479d0068033681d06776a137b96a18
    return 0;
}
