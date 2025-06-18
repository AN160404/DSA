#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4};
    int size=nums.size();
    
    // we divide into 2 parts suffix and prefix then multiply the elements of 2 vectors.
    vector<int> ans(size,1);

    // from the start the answer will be stored as {1,1,2,6} 
    for(int i=1;i<size;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }

    //from the end we multiply the suffix with ans array. Answer will be as:-
    // For i=2: {1,1,2,6}  suffix=1*4=4  =>ans[2]*suffix=8  ==>{1,1,8,6}
    // For i=1: {1,1,8,6}  suffix=4*3=12 =>ans[1]*suffix=12 ==>{1,12,8,6}
    // For i=0: {1,12,8,6} suffix=12*2   =>ans[0]*suffix=24 ==>{24,12,8,6}
    int suffix=1;
    for(int i=size-2;i>=0;i--){
        suffix=suffix*nums[i+1];
        ans[i]=ans[i]*suffix;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<ans[i]<<endl;
    }
    
}