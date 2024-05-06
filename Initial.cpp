#include <iostream>

using namespace std;

int main()
{
    int n=5,s=0;
    int arr[]={1,2,3,4,5};
    cout<<"Algo for frequency count\n";
    for(int i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    cout<<s;
    return 0;
}