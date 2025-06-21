#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={4,1,5,2,3};

    for(int i=1;i<nums.size();i++){
        // Inititalizing the current element
        int curr=nums[i];
        // Initializing the previous positions
        int prev=i-1;
        // Traverse all previous until they come to be less than current value.
        while(prev>=0 && nums[prev]>curr){
            nums[prev+1]=nums[prev]; // Shifting all the previous with one step
            prev--;
        }
        // Redefine the number to be switched with the current value
        nums[prev+1]=curr; // +1 because if we reach a number less than curr, we replace the number next to it with current.
    }

            for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;   
    }
    

    
}