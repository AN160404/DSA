#include <iostream>
using namespace std;
//Swap max and min of an array
int main(){
    int arr[5]={15,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT16_MAX;
    int largest=INT16_MIN;
    int pos1=0,pos2=0;
    for (int i = 0; i < len; i++)
    {
        if(smallest>arr[i]){
            smallest=arr[i];
            pos1=i;

        }
        if(largest<arr[i]){
            largest=arr[i];
            pos2=i;
        }
    }
    arr[pos1]=largest;
    arr[pos2]=smallest;

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}