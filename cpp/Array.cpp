#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,11};
    int count=vec.size();
    int target=9;
    vector<int> element;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if(vec[i]+vec[j] ==target)
            {
                element.push_back(vec[i]);
                element.push_back(vec[j]);
            }
        }
    }
    cout<<element[0]<<" "<<element[1]<<endl;
    return 0; 
}