#include<bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list for constructor:
constructor(argument-list):initialization section
{
    assignment + other code
}

class Test
{
    int a,b;
    public:
        Test(int i, int j):a(i),b(j)
        {  
            constructor-body
        }
};
*/

class Test
{
    int a,b;
    public:
        // Test(int i, int j):a(i),b(i)
        // Test(int i, int j):a(i),b(i+j)
        // Test(int i, int j):a(i),b(2*j)
        // Test(int i, int j):a(i+b),b(j) //This will throw garbage value of a since value of b is used before initialization
        Test(int i, int j):a(i),b(a*j)
        {
            cout<<"constructor executed"<<endl;
            cout<<"Tha value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main()
{
    Test t(4,5);
    return 0;
}