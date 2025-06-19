#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> arr={1,2,7,3};
    int size=arr.size();
    int st=1,end=size-2;
        
    while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                cout<<mid;
                return mid;
                
            }
            else if(arr[mid]>arr[mid-1]){    //Mid is on the left side of the mountain.
                st=mid+1;  
            }
            else{ //Mid is on the right side of the mountain
                end=mid-1;
            }
        }
        return 0;
    
    
}