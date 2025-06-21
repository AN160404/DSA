#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums={2,0,1,1,0,1,2,0,0};
    int size=nums.size();
        int zero=0,two=0,one=0;
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else if(nums[i]==2){
                two++;
            }
        }
        int idx=0;
        for(int i=0;i<zero;i++){
            nums[idx++]=0;
        }
        for(int i=0;i<one;i++){
            nums[idx++]=1;
        }
        for(int i=0;i<two;i++){
            nums[idx++]=2;
        }
    return 0;
    
}