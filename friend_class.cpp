#include<iostream>
using namespace std;

class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        int sumrealomplex(Complex, Complex);
        int sumimgcomplex(Complex, Complex);
};

class Complex
{
    int a,b;
    // individually declaring functions as friends.
    // friend int Calculator::sumrealomplex(Complex,Complex);
    // friend int Calculator::sumimgcomplex(Complex,Complex);
    
    // Alternative: Declare the class as friend.
    friend class Calculator;
    public:
        void setNumber(int v1, int v2)
        {
            a=v1;
            b=v2;
        }

        void displayNumber()
        {
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int Calculator::sumrealomplex(Complex o1, Complex o2)
{
    return (o1.a+o2.a);
}

int Calculator::sumimgcomplex(Complex o1, Complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1,5);
    o2.setNumber(2,4);

    Calculator c1;
    int resreal=c1.sumrealomplex(o1,o2);
    cout<<"Sum of the real part is "<<resreal<<endl;
    int resimg=c1.sumimgcomplex(o1,o2);
    cout<<"Sum of the imaginary part is "<<resimg<<endl;
    return 0;
}