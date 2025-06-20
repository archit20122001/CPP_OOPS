#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;
    public:
        Complex(void);
        Complex(int,int);

        void display()
        {
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex::Complex(void)
{
    a=5;
    b=4;
}

Complex::Complex(int x, int y)
{
    a=x;
    b=y;
}

int main()
{
    Complex a;
    a.display();
    // Implicit Call
    Complex a1(2,4);
    a1.display();
    // Explicit Call
    Complex b = Complex(2,5);
    b.display();
    return 0;
}