#include <iostream>
using namespace std;

int main(){
    long pow=10;
    int n=2;
    double ans=1;
    while(pow>0){
        if(pow%2==1){
            ans=ans*n;
        }
        n=n*n;
        pow=pow/2;
    }
    cout<<ans<<endl;
}