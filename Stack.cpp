//Tower of hanoi
#include <iostream>
using namespace std;
int Tower(int num, char source, char dest, char aux)
{
    if(num==1)
    {
        cout<<"Moved from "<< source<<" to "<<dest<<endl;
        return 0;
    }
    else{
        Tower( num-1, source, aux, dest);
        cout<<"Moved from "<< source<<" to "<<dest<<endl;        
        Tower( num-1, aux, dest, source);
    }
}
int main(){
    int num=3;
    Tower(num,'S','D','A');
    return 0;
}