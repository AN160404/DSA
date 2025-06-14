#include <iostream>
using namespace std;

int main(){
    int arr[10]={12,33,4,5,6,12,34,32,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    int num=5;

    for (int i = 1; i <len ;i++){
        if(num==arr[i]){
            cout<<i<<" is the position of the element."<<endl; 
        }
    }

    return 0;
}