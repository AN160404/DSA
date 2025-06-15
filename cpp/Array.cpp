#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    int count=vec.size();
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<vec[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
}