#include <iostream>
using namespace std;

int main(){
    int decnum=10;
    int binnum=0;
    int i=1,rem=0;
    while(decnum>0){
        rem=decnum%2;
        decnum=decnum/2;
        binnum=binnum+rem*i;
        i=i*10;
    }
    cout<<binnum<<endl;
}