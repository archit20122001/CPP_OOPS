#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;
    public:
        // This is an example of constructor overloading were the constructors are called according to their parameters.
        Complex()
        {
            a=0;
            b=0;
        }
        Complex(int x)
        {
            a=x;
            b=0;
        }
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main()
{
    Complex a;
    a.display();
    Complex b(4);
    b.display();
    Complex c(2,5);
    c.display();
    return 0;
}