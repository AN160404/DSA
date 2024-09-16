//Find Numbers with Even Number of Digits
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int count=0,numcount=0;
    for(int num:nums)
    {
        while(num>0)
        {
            num=num/10;
            count++;
        }
        if(count%2==0)
        {
            numcount++;
        }
        count=0;
    }
    return numcount;
    }
};