#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums, int lb, int ub, int mid, vector<int>& temp) {
    temp.clear();
    int i = lb, j = mid + 1;
    while (i <= mid && j <= ub) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        } else {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }
    while (j <= ub) {
        temp.push_back(nums[j]);
        j++;
    }
    for (int i = lb; i <= ub; i++) {
        nums[i] = temp[i - lb];
    }
}

void mergeSort(vector<int>& nums, int lb, int ub, vector<int>& temp) {
    if (lb >= ub) return; // Base case to stop recursion
    int mid = lb + (ub - lb) / 2;
    mergeSort(nums, lb, mid, temp);
    mergeSort(nums, mid + 1, ub, temp);
    merge(nums, lb, ub, mid, temp);
}

int main() {
    vector<int> nums = {4, 1, 5, 2, 3, 6, 7, 8};
    int n = nums.size();
    vector<int> temp;
    mergeSort(nums, 0, n - 1, temp);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
