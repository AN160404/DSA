//Enqueue
#include <iostream>
using namespace std;
int main()
{
    int num=0;
    cout<<"Enter number:"<<endl;
    cin>>num;

    int size=5;
    int queue[size]={};
    int rear=-1,front=-1;
    if (rear==size-1)
    {
        cout<<"Queue is full"<<endl;
        return 0;
    }
    if (rear==-1 && front==-1)
    {
        front=0;
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=num;

    for (int i = 0; i < size; i++)
    {
        cout<<queue[i]<<endl;
    }
        return 0;

}