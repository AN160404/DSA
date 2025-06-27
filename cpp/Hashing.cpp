#include <iostream>
#include <vector>
using namespace std;
int main(){
    int nums[]={0,1,2,0,1,1,3,2};
    int n=sizeof(nums);
    int hash[n+1]={0};
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int val:hash){
        cout<<val<<endl;
    }
    
}