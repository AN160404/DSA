//Dequeue
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int queue[size]={1,2,3,4,5};
    int rear=4,front=0;
    
    if(front==-1 || rear==-1)
    {
        cout<<"underflow"<<endl;
        return 0;
    }
    int val=queue[front];
    if(rear==front)
    {
        front=-1;
        rear=-1;
    }
    else{
        if(front==size-1)
        {
            front=0;
        }
        else{
            front=front+1;
        }
    }
    

    for (int i = front; i <size; i++)
    {
        cout<<queue[i]<<endl;
    }
    
        return 0;

}