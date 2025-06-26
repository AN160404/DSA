#include <iostream>
using namespace std;

int main(){
    int n=13;
    for(int i=2; i*i<n;i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime"<<endl;
    return 0;
}