#include<bits/stdc++.h>
using namespace std;

int product(int x,int y)
{
    return x*y;
}

int super(int a,int b)
{
    int c=a*a-(b)^a;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"The product of a and b is: "<<product(a,b);
    return 0;

}