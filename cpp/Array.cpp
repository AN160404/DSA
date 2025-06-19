#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isValid(vector<int> &arr,int size,int n,int mid){
    int student=1,pagecount=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>mid){
            return false;
        }
        if(pagecount+arr[i]<=mid){
            pagecount+=arr[i]; //Adding until it's coming less
        }
        else{
            student++; //Increasing the student count just when the page count exceeds the mid or maxallowed
            pagecount=arr[i]; //Adding the page that couldn't be added into the last student.
        }
    }
    if(student>n){
        return false;
    }
    else{
        return true;
    }
    
}

int main(){
    vector<int> arr={2,1,3,4};
    int size=arr.size();
    int n=2;
    int st=0,end=0;
    int ans=0;
    for(int val:arr){
        end+=val;
    }
    int mid=0;
    while(st<=end){
        mid=st+(end-st)/2;
        if(isValid(arr,size,n,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<<ans;

        return 0;
    
    
}