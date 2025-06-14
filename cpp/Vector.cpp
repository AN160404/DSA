#include<iostream>
#include<vector>
using namespace std;
//reversing the array
int main(){
    vector<int> nums={1,2,3,4,5};
    int start=0, end=nums.size()-1;
    while(start<end){
        int temp=nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
    for (int i : nums)
    {
        cout<<i<<endl;
    }
    
    return 0;
}