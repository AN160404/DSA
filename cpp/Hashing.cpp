#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3};
    int k = 3;

    int n = nums.size();
    unordered_map<int, int> m;
    m[0] = 1;
    int count = 0, sum = 0;

    for (int num : nums)
    {
        sum += num; // Contiguous sum for each number
        if (m.find(sum - k) != m.end())  // If the remaining number found in the sums till now?
        {                       
            count += m[sum - k]; // Adding the frequency of remaining sum
        }
        m[sum]++; // If sum not present, adding the frequency of sum to map.
    }
    cout << count << endl;
}