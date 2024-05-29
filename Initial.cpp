// #Leetcode 1281
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int num=x,rem=1,n=0;
        while(num>0)
        {
            rem=num%10;
            n=(n*10)+rem;
            num=num/10;
        }
        if(n==x)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Solution obj;
    obj.isPalindrome(121);
}