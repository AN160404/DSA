#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 1, 5};

    int slow = nums[0], fast = nums[0];
    do
    {
        slow = nums[slow];       // +1
        fast = nums[nums[fast]]; // +2
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow]; // +1
        fast = nums[fast]; // +1
    }
    cout << slow;
}