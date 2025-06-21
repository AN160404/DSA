#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={4,1,5,2,3};
    bool isSwap=false;
    for(int i=0;i<nums.size();i++){
        for (int j = i+1; j < nums.size(); j++)
        {
            isSwap=false;
            if (nums[i]>nums[j])
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                isSwap=true;
            }
        }
        
    }
    if (isSwap==false){
        cout<<"Array already sorted";
    }
    else
    {
            for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;   
    }
    }
    

    
}