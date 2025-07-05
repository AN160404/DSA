#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

set<vector<int>> s;
void combSum(vector<int> &arr, int i, vector<vector<int>> &ans, vector<int> &comb, int target)
{
    int n = arr.size();
    if (target == 0)
    {
        if (s.find(comb) == s.end())
        {
            ans.push_back(comb);
            s.insert(comb);
        }

        return;
    }
    if (i == n || target < 0)
    {
        return;
    }
    comb.push_back(arr[i]);
    combSum(arr, i + 1, ans, comb, target - arr[i]); // Single Inclusion
    combSum(arr, i, ans, comb, target - arr[i]);     // Multiple Inclusion
    comb.pop_back();
    combSum(arr, i + 1, ans, comb, target); // Exclusion
}

int main()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> comb;
    int i = 0;
    combSum(arr, i, ans, comb, target);
    for(const auto &vec: ans){
        for(const auto &v: vec){
            cout<<v<<" ";
        }
        cout << endl;
    }
}