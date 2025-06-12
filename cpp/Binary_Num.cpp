#include <iostream>
using namespace std;

uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        
        for (int i = 0; i < 32; i++) {
            int lastBit = n % 2;       // Get the last bit (0 or 1)
            result = result * 2 + lastBit; // Shift result left and add the bit
            n = n / 2;                 // Shift input right
        }

        return result;
    }

uint32_t main(){
    uint32_t result=reverseBits(00000010100101000001111010011100);
    cout<<result<<endl;
    return 0;
}