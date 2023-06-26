#include<iostream>
using namespace std;
int main()
{
    int A[2][2];
    cout<<"Enter values in first array: ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        cin>>A[i][j];
    }
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
           if(A[i][k]==A[k][j])
           {
            cout<<"it is same!";
           }
    }
    }
    }
    return 0;
}