#include <iostream>
using namespace std;

int main(){
    int arr[10]={12,33,4,5,6,12,34,32,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int num=INT16_MAX;

    for (int i = 1; i <len ;i++){
        if(num>arr[i]){
            num=arr[i]; 
        }
    }

    cout<<num<<" is the smallest number."<<endl;
    return 0;
}