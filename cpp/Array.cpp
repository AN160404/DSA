#include <iostream>
using namespace std;
//Swap max and min of an array
int main(){
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int smallest=INT16_MAX;
    int largest=INT16_MIN;

    for (int i = 0; i < len; i++)
    {
        if(smallest>arr[i]){
            smallest=arr[i];
        }
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;
    
    return 0;
}