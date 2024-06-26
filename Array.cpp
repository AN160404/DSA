//2D matrix to 1D by Row major order
#include <iostream>
using namespace std;
int main()
{
    int rows=3,columns=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int index=0;
    int flattened[rows*columns]={};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            flattened[index]=arr[i][j];
            index++;
        }
    }
    for (int i = 0; i < rows*columns; i++)
    {
        cout<<flattened[i]<<endl;
    }
    
    return 0;
}