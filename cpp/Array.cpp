#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Assign C cows to N stalls such that minimum distance between them is largest possible. Return largest minimum distance.


bool isValid(vector<int> nums,int N,int C,int mid){
    int cow=1,pos=nums[0];
    for(int i=1;i<N;i++){
        if(nums[i]-pos>=mid){ // If the distance between current stall and last assigned stall is greater than or equal to mid
            cow++; // Assign cow to this stall
            pos=nums[i]; // Update the position of last assigned stall
        }
        if(cow==C) return true; // If we have assigned all cows, return true
    }
    return false;
}

int main(){
    vector<int> nums={1,2,8,4,9};
    sort(nums.begin(),nums.end());
    int N=5,C=3;
    int st=1,end=nums[N-1]-nums[0];

    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(nums,N,C,mid)){ //We can get more smaller values than mid
            ans=mid;
            st=mid+1; //
        }
        else{ // Not Valid -- we can't get more smaller value than the mid
            end=mid-1;
        }
    }
    cout<<ans;
    return 0;
    
    
}