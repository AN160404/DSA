#include <iostream>
using namespace std;
//Sum and Product of all numbers
int main(){
    int arr[5]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0,product=1;
    int start=0;

    for (int i = 0; i < len; i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Product: "<<product<<endl;
    
    return 0;
}