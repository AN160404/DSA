#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;

    vector<int> ans;
    unordered_map<int,int> map;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int first=nums[i];
        int second=target-first;
        if(map.find(second)!=map.end()){
            ans.push_back(first);
            ans.push_back(second);
        }
        map[first]=i;
    }
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    
    
}