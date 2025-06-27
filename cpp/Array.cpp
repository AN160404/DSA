#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3};
    int target=5;
    vector<int> arr;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        cout<<arr[0]<<endl;
        cout<<arr[1]<<endl;
        return 0;
}