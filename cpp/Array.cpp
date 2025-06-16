#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,2,2,1};
    int count=nums.size();
    int maj=nums[0];
    bool ismaj=true;
    int freq=0;
    for (int i = 0; i < count; i++)
    {
        if (freq==0)
        {
            maj=nums[i];
        }
        if(nums[i]==maj){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<"Majority Element: "<<maj<<endl;
    
    return 0; 
}