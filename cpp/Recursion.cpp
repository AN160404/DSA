#include <iostream>
using namespace std;

int num(int n){
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    cout<<n<<endl;
    num(n-1);
    return 0;
}
int main(){
    int n=5;
    num(n);
    return 0;
}