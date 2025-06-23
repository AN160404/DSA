#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;
    m["B"]=20;
    m["A"]=10;

    for(auto val:m){
        cout<<val.first<<":"<<val.second<<endl;
    }

    // It sorts according to the key

    return 0;
}