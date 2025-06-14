#include <iostream>
using namespace std;
//Unique Values in an array
int main(){
    int arr[10]={15,2,3,4,5,6,2,8,3,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        bool isunique=true;
        for(int j=0;j<len;j++){
            if(i!=j && arr[i]==arr[j]){  //element at different positions are same
                isunique=false;
            }

        }
        if(isunique==true){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}