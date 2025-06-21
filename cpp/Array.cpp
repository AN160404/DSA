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
    vector<int> nums={2,0,1,1,0,1,2,0,0};
    sort(nums.begin(),nums.end());
    return 0;
    
}