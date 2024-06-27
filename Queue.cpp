//Dequeue
#include <iostream>
using namespace std;
int main()
{
    int size=5;
    int queue[size]={1,2,3,4,5};
    int rear=4,front=0;
    
    
    if(front==-1 || front>rear)
    {
        cout<<"underflow"<<endl;
    }
    else{
        int val=queue[front];
        front=front+1;
    }

    for (int i = size-1; i >=front; i--)
    {
        cout<<queue[i]<<endl;
    }
    
        return 0;

}