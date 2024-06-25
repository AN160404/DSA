//Insertion in an Array
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size]={1,2,3,4,5};
    int num=0,pos=0;
    cout<<"Enter number to be inserted:"<<endl;
    cin>>num;
    cout<<"Enter where to be inserted"<<endl;
    cin>>pos;
    size++;

    for (int i = size; i >=pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}