#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,11};
    int count=vec.size();
    int target=9;
    vector<int> element;
    int i=0,j=count-1;
    while(i<j){
        int sum=vec[i]+vec[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else if(sum==target){
            element.push_back(vec[i]);
            element.push_back(vec[j]);
            break;
        }
    }
    cout<<element[0]<<" "<<element[1]<<endl;
    return 0; 
}