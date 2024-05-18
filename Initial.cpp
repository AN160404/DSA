// #Leetcode 1281
#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1,diff;
        int num=n,num1=n;
        int rem=1;
        int len=0;
        while(num1>0)
        {
            num1=num1/10;
            len++;
            cout<<len<<endl;
        }
        for(int i=0;i<len;i++)
        {
            sum=sum+num%10;
            product=product*(num%10);
            num=num/10;
        }
        diff=product-sum;
        cout<<"product"<<product<<endl;
        cout<<"sum"<<sum<<endl;
        cout<<"diff:"<<diff<<endl; 
    }
};
int main()
{
    Solution obj;
    obj.subtractProductAndSum(111);
}