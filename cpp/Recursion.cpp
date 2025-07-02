#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int permutation(vector<int> &arr, vector<vector<int>> &ans, int idx)
{ 
    if (idx == arr.size())
    {
        ans.push_back({arr});
        return 0;
    }
    unordered_set<int> s;
    for(int i=idx;i<arr.size();i++){
        if(s.count(arr[i])) continue;
        s.insert(arr[i]);

        swap(arr[i],arr[idx]);
        permutation(arr,ans,idx+1);
        swap(arr[i],arr[idx]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 2};
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