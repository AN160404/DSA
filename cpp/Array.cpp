#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int pivot = -1;
    // Finding pivot element
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            pivot = i;
            break;
        }
    }

    // If no pivot then no need of sorting thus returning reversed array
    if (pivot == -1)
    {
        reverse(nums.begin(), nums.end());
        return 0;
    }

    // Swapping the pivot with it's successor
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > nums[pivot])
        {
            int temp = nums[i];
            nums[i] = nums[pivot];
            nums[pivot] = temp;
            break;
        }
    }

    // Reversing all the other decresing values
    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }

    for (int val : nums)
    {
        cout << val << endl;
    }
    return 0;
}