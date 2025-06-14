#include <iostream>
using namespace std;
//Intersection of 2 Arrays
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[4]={3,4,6,5};
    int len1=sizeof(arr)/sizeof(arr[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    int len=len1+len2;
    for (int i = 0; i < len1; i++)
    {
        for(int j=0;j<len2;j++){
            if(arr[i]==arr2[j]){  
                cout<<arr[i]<<endl;
            }
        }
    }
    return 0;
}