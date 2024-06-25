//Traversing in an Array
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int num=0;
    cout<<"Enter number to be traversed:"<<endl;
    cin>>num;
    for (int i = 0; i < sizeof(arr); i++)
    {
        if(num == arr[i])
        {
            cout<<"Number exists at "<<i<<endl;
            return 0;
        }
        
    }
    return 0;
}