#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,2,2,1};
    int count=nums.size();
    int maj=nums[0];
    bool ismaj=true;
    int freq=1;
    sort(nums.begin(),nums.end());
    for (int i = 0; i < count; i++)
    {
        if (nums[i]==nums[i-1])
        {
            freq++;
        }
        else{
            freq=1;
            maj=nums[i];
        }
        if(freq>count/2){
            maj=nums[i];
            ismaj=true;
        }
        else{
            ismaj=false;
        }
    }
    
    if (ismaj)
    {
        cout<<"Majority Element: "<<maj<<endl;
    }
    else{
        cout<<"No Majority Element exists"<<endl;
    }
    
    return 0; 
}