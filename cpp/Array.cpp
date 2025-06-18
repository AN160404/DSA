#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int size=height.size();
    int maxwater=0;
    int l=0,r=size-1;
    while(l<r){
        int w=r-l;
        int h=min(height[l],height[r]);
        int area=w*h;
        maxwater=max(maxwater,area);
        height[l]<height[r] ? l++ : r--;
    }
    cout<<maxwater<<endl;
}