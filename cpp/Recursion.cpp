#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int permutation(vector<int> &arr, vector<vector<int>> &ans, int idx)
{ 
    if (idx == arr.size())
    {
        ans.push_back({arr});
        return 0;
    }
    
    for(int i=idx;i<arr.size();i++){
        swap(arr[i],arr[idx]);
        permutation(arr,ans,idx+1);
        swap(arr[i],arr[idx]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    int i = 0;

    permutation(arr, ans, i);

    for (const auto& row : ans) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}