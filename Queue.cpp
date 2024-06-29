//Dequeue
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int queue[size]={};
    int rear=-1,front=-1;
    int value=1;
    
    if(front==0 && rear==size-1 ||  front==rear+1)
    {
        cout<<"overflow"<<endl;
        return 0;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else if(front!=0 && rear==size-1)
    {
        rear=0;
    }
    else{
        rear=rear+1;
    }
    queue[rear]=value;

    for (int i = front; i <size; i++)
    {
        cout<<queue[i]<<endl;
    }
    
        return 0;

}