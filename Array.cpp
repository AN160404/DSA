//Deletion in an Array by number
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={1,2,3,4,5};
    int num=0,pos=0;
    cout<<"Enter number to be deleted:"<<endl;
    cin>>num;

    for (int i = size; i >=0; i--)
    {
        if(num==arr[i])
        {
            arr[i]=0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}