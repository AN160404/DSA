#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,2,3};
    int result=0;
    for(int val:nums){
        result^=val;
    }
    cout<<result<<endl;
    return 0;
}