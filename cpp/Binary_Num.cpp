#include <iostream>
using namespace std;

int findComplement(int num) {
        int result = 0;
        int power = 1;
        while (num > 0) {
            int bit = num % 2;
            num /= 2;
            result += (1 - bit) * power;
            power *= 2;
        }
        return result;
    }

int main(){
    int result=findComplement(5);
    cout<<result<<endl;
}