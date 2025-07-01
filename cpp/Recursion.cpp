#include <iostream>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact((n-1));
    return 0;
}
int main(){
    int n=5;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}