#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subset(vector<int> &arr, vector<int> &ans, int i,vector<vector<int>> &allsub)
{ // O(n*2^n)
    if (i == arr.size())
    {
        allsub.push_back(ans);
        return 0;
    }
    // Including
    ans.push_back(arr[i]);
    subset(arr, ans, i + 1,allsub);

    // Excluding
    ans.pop_back();

    // Ensuring same element is not getting read twice

    int idx=i+1;
    while(idx<arr.size() && arr[idx]==arr[idx-1]){
        idx++;
    }
    subset(arr,ans,idx,allsub);
}
int main()
{
    vector<int> arr = {1, 2, 2};
    vector<int> ans;
    vector<vector<int>> allsub;
    int i = 0;
    sort(arr.begin(),arr.end());

    subset(arr, ans, i,allsub);

    for (const auto& row : allsub) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}