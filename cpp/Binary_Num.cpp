#include <iostream>
using namespace std;

int main(){
    int decnum=0;
    int binnum=1010;
    int i=1,rem=0;
    while(binnum>0){
        rem=binnum%10;
        decnum=decnum+rem*i;
        binnum=binnum/10;
        i=i*2;
    }
    cout<<decnum<<endl;
}