#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
int main()
{
    vector<int> nums={1,2,3,1};
    unordered_set<int> hash;
        for(int val:nums){
            if(hash.count(val)) return true;
            hash.insert(val);
        }

        return false;
}