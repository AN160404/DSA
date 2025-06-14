#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int start=0,end=nums.size()-1;

        while(start<=end){
        int mid=start+(end-start)/2;
        if(target==nums[mid]){
            return mid;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        }
        return -1;
    }
};

int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    Solution obj;
    int result=obj.search(vec,6);
    cout<<"Position: "<<result<<endl;
    return 0;
}