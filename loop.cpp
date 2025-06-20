#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k;
    cout<<"Enter the elements of array A\n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements in array B\n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[j][k];
            }
            cout<<c[i][j];
        }
        cout<<"\n";
    }
}