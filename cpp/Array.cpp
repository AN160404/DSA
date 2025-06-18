#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4};
    int size=nums.size();
    vector<int> ans={};
    for(int i=0;i<size;i++){
        int prod=1;
        for(int j=0;j<size;j++){
            if(i!=j){
                prod=prod*nums[j];
            }
        }
        ans.push_back(prod);
    }
    for (int i = 0; i < size; i++)
    {
        cout<<ans[i]<<endl;
    }
    
}