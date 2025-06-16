#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,0,2,1};
    int count=vec.size();
    int maj=0;
    bool ismaj=true;
    for (int i = 0; i < count; i++)
    {
        int num=0;
        for (int j = 0; j < count; j++)
        {
            if(vec[i]==vec[j])
            {
                num++;
                if(num>count/2){
                    ismaj=true;
                    maj=vec[i];
                }
                else{
                    ismaj=false;
                }
            }
        }
        
    }
    if (ismaj)
    {
        cout<<"Majority Element: "<<maj<<endl;
    }
    else{
        cout<<"No Majority Element exists"<<endl;
    }
    
    return 0; 
}