#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& nums, int lb, int ub) {
    int i=lb,j=ub,pivot=nums[lb];
    while(i<=j){
        do{i++;} while(nums[i]<=pivot);
        do{j--;} while(nums[j]> pivot);
        if(i<j){
            swap(nums[i],nums[j]);
        }
        else{
            swap(pivot,nums[j]);
            return j;
        }
    }
}

void quickSort(vector<int>& nums, int lb, int ub) {
    if (lb >= ub) return; // Base case to stop recursion
    int part=partition(nums,lb,ub);
    quickSort(nums,lb,part);
    quickSort(nums,part+1,ub);
}

int main() {
    vector<int> nums = {4, 1, 5, 2, 3, 6, 7, 8};
    int n = nums.size();
    vector<int> temp;
    quickSort(nums, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}
