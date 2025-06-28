#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int j = i + 1, k = n - 1;
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        while (j < k)
        {
            if (nums[i] + nums[j] + nums[k] < 0)
            {
                j++;
            }
            else if (nums[i] + nums[j] + nums[k] > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
            }
        }
        
        
    }
    for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<< ans[i][j]<<" ";
            }
            cout<<endl;
            
        }
}