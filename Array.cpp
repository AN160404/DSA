//Deletion in an Array by position
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={1,2,3,4,5};
    int num=0,pos=0;
    cout<<"Enter position to be deleted:"<<endl;
    cin>>pos;

    for (int i =pos; i <size; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"deleted list --"<<endl;
    for (int i = 0; i < size; i++)
    {
        
        cout<<arr[i]<<endl;
    }
    
}