#include<iostream>
#include<vector>
using namespace std;
//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

int main(){
    vector<int> nums={1,2,3,4,5};
    int n=3;
    for(int val:nums){
        if(n==val){
            cout<<n<<" is present"<<endl;
        }
    }
    return 0;
}