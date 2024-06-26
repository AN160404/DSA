//2D matrix to 1D by Column major order
#include <iostream>
using namespace std;
int main()
{
    int rows=3,columns=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int index=0;
    int flattened[rows*columns]={};
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            flattened[index]=arr[j][i];
            index++;
        }
    }
    for (int i = 0; i < rows*columns; i++)
    {
        cout<<flattened[i]<<endl;
    }
    
    return 0;
}