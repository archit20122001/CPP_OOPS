#include<bits/stdc++.h>
using namespace std;

int sum(int, int);
void g();

int main()
{
    int a,b,c;
    cout<<"Enter both numbers: ";
    cin>>a>>b;
    g();
    c=sum(a,b);
    cout<<c;
    return 0;
}

int sum(int x, int y)
{
    // x and y will be taking values from the parameters a and b, hence x and y are formal parameters, and a and b are actual parameters.
    int c=x+y;
    return c;
}

void g()
{
    cout<<"The sum of the two numbers is: ";
}