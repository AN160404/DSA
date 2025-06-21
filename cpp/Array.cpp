#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums={2,0,1,1,0,1,2,0,0}; // Boundaries: 0 -> 0 to low-1 | 1 -> low to mid-1 | 2 -> high-1 to size-1
    int size=nums.size();
        int size=nums.size();
        int low=0,mid=0,high=size-1;  
        while(mid<=high){
            if(nums[mid]==0){
                // Swapping nums[mid] and nums[low]
                int temp=nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                // Inc low partition and mid partition in order to maintain boundaries
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                int temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
        }

        for(int val:nums){
            cout<<val<<endl;
        }
    return 0;
    
}