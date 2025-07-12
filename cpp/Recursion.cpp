#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int merge(vector<int> &nums, int lb, int ub, int mid, vector<int> &temp)
{
    temp.clear();
    int count = 0;
    int i = lb, j = mid + 1;

    while (i <= mid && j <= ub)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            count += (mid - i + 1); // Count inversions
            j++;
        }
    }

    // Append remaining elements
    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= ub)
    {
        temp.push_back(nums[j]);
        j++;
    }

    // Copy sorted elements back into nums
    for (int k = 0; k < temp.size(); ++k)
    {
        nums[lb + k] = temp[k];
    }

    return count;
}

int mergeSort(vector<int> &nums, int lb, int ub, vector<int> &temp)
{
    if (lb >= ub)
        return 0;

    int mid = lb + (ub - lb) / 2;
    int c1 = mergeSort(nums, lb, mid, temp);
    int c2 = mergeSort(nums, mid + 1, ub, temp);
    int c3 = merge(nums, lb, ub, mid, temp);
    return c1 + c2 + c3;
}

int main()
{
    vector<int> nums = {6, 3, 5, 2, 7};
    int n = nums.size();
    vector<int> temp;
    int count = mergeSort(nums, 0, n - 1, temp);
    cout << "Inversion count: " << count << endl;
    return 0;
}
