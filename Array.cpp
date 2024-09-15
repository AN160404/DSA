//duplicate zeros
#include <stdio.h>
#include <vector>
using namespace std;
class Solution 
{
    public:
    void duplicatezeros(vector<int>& arr)
    {
        int length=arr.size();
        for(int i=0;i<length-1;i++)
        {
            if(arr[i]==0){
                for(int j=length-1;j>i;j--)
                {
                    arr[j]=arr[j-1];
                }
                i++;
            }
        }
    }
};