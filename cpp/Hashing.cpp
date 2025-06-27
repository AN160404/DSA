#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 1, 5};

    int n = nums.size();
    vector<int> hash(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] > 1)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}