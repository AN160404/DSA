#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums={1,1,2,2,3,7,7};
    int size=nums.size();
    int st=0,end=size-1;
        int mid;
        if(size==1){
            return nums[0]; // For array of size 1
        }
        while(st<=end){

            mid=st+(end-st)/2;
            if(mid==0 && nums[0]!=nums[1]) return nums[0]; //Handling 1st element
            if(mid==size-1 && nums[size-1]!=nums[size-2]) return nums[size-1]; //Handling last element

            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }


            if(mid%2==0){  //For {1,1,2,3,3,4,4,8,8}  On dividing by two even number of elements on each side thus mid also even
                if(nums[mid]==nums[mid-1]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
                
            }
            else{  // For {3,3,7,7,10,11,11}  On dividing by two odd number of elements on each side thus mid also odd
                if(nums[mid]==nums[mid-1]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return 0;
    
    
}