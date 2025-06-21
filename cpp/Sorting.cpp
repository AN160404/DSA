#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={4,1,5,2,3};

    for(int i=0;i<nums.size()-1;i++){
        // Inititalizing the minimum element
        int min=i;
        for (int j = i+1; j < nums.size(); j++)
        {
            if(nums[j]<nums[min]){
                min=j; // Minimum changed
            }
        }

        //Swapping the minimum element with the previous minimum element
        int temp=nums[min];
        nums[min]=nums[i];
        nums[i]=temp;        
    }

            for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;   
    }
    

    
}