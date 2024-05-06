#include <iostream>
using namespace std;

int main()
{
    int n=3,s=0,i=0,j=0,k=0;
    int arr3[3][3]={{0}};
    int arr1[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    cout<<"Algo for square matices' product \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for (int k = 0; k < n; k++)
            {
               arr3[i][j] = arr3[i][j]+arr1[i][k]*arr2[k][j]; 
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}