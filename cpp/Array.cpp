#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Given are N boards of length of each given in the form of array and M painters, such that each painter takes 1 unit of time to paint 1 unit of the board.
//The task is to find the minimum time to paint all boards under the conastrains that any painter will only pain continuous sections of board.


bool isValid(vector<int> nums,int n,int m,int mid){
    int painters=1,time=0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]>mid){
            return false;
        }
        if(time+nums[i]<=mid){
            time=time+nums[i];
        }
        else{
            painters++;
            time=nums[i];
        }
    }
    if(painters>m){
        return false;
    }
    else{
        return true;
    }
    
}
int main(){
    vector<int> nums={40,30,10,20};
    int n=4,m=2;
    int st=0,end=0;
    int ans=0;
    for(int val:nums){
        st=max(st,val);
        end+=val;
    }
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(nums,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<<ans;
    return 0;
    
    
}