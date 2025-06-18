#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int size=height.size();
        int maxwater=0;
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                int w=j-i;
                int h=min(height[i],height[j]);
                maxwater=max(maxwater,w*h);
            }
            
        }
    cout<<maxwater<<endl;
}