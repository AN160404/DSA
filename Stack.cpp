//Push
#include <iostream>
using namespace std;
int main(){
    int size=5;
    int stack[size]={};
    int n=0;
    cout<<"Enter the number of elements to be added"<<endl;
    cin>>n;
    int top=-1,num=0;
    while (n>0)
    {
        cout<<"Enter element to be added"<<endl;
        cin>>num;
        if(top==size-1)
    {
        cout<<"Stack Overflow"<<endl;
        return 0;
    }
    else{
        top++;
        stack[top]=num;
    }
    n--;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<stack[i]<<endl;
    }
    return 0;
}