#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        while(st<=end)
        {int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]){    //Left Part is Sorted
            if(target>=nums[st] && target<=nums[mid]){ // working on left part of main array
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{  //Right part is sorted
        if(target>=nums[mid] && target<=nums[end]){ // working on right part of sorted array
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        }}
        return -1;
    }
};
int main(){
    vector<int> nums={1,2,3,4,7,0};
    int target=7;
    Solution obj;
    int result=obj.search(nums,target);
    cout<<result;
    
    
}