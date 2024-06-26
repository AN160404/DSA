//Pop
#include <iostream>
using namespace std;
int main(){
    int size=5;
    int stack[size]={1,2,3,4,5};
    int n=0;
    cout<<"Enter the number of elements to be popped"<<endl;
    cin>>n;
    int top=size,num=0;
    while (n>0)
    {
        if(top<=-1)
    {
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else{
        top=top-1;
    }
    n--;
    }
    for (int i = 0; i < top; i++)
    {
        cout<<stack[i]<<endl;
    }
    return 0;
}