#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n,r,a;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter r:"<<endl;
    cin>>r;

    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nr=factorial(n-r);
    a=(fact_n/(fact_r*fact_nr));
    cout<<a<<endl;
    return 0;
}