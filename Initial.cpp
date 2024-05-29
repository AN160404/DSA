// #Leetcode 191
#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        
        int count=0;

        while(n!=0)
        {
            if (n&1)
            {
                count++;
            }
            n=n>>1;
        }
    }
};

int main()
{
    Solution obj;
    obj.hammingWeight(1);
}