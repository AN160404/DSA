// FIBONACCI SERIES

#include <iostream>
using namespace std;
int main(){
    int num=10,sum=1;
    cout<<"0"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<sum<<endl;
        sum=sum+i;
    }
    return 0;
}
