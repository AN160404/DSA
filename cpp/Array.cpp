#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int num=5;
    int temp=0;
    int start=0,end=len-1;

    while (start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}