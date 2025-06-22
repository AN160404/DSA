#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> nums1={1,2,3,0,0,0}; 
    vector<int> nums2={2,5,6};
    int m=3,n=3;
        
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
        if(i<0){
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
    }
    
    for(int val:nums1){
        cout<<val<<endl;
    }
    return 0;
    
}