#include<iostream>
#include<vector>
using namespace std;
//reversing the array
int main(){
    vector<int> vec={1,2,3,4,5};
    // Erasing nums in a range (1 to 4)
    vec.erase(vec.begin()+1,vec.begin()+3);

    // Inserting at a position
    vec.insert(vec.begin()+1,100);

    // Clearing the whole array
    vec.clear();

    // Checking if the vector array is empty
    int ans=vec.empty();

    cout<<ans<<endl;

    
    for (int i : vec)
    {
        cout<<i<<endl;
    }


    
    return 0;
}