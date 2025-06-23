#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> ls;

    ls.push_back(1); // Pusing from back
    ls.push_front(2); //Pushing from front
    ls.push_back(1);
    ls.push_front(2);
    
    ls.pop_back(); // Popping from back
    ls.pop_front(); // Pushing from front

    // size, erase, clear, begin, end, rbegin, rend, insert, front, back   

    
    for (int val:ls)
    {
        cout<<val<<endl;
    }

    return 0;
    
}