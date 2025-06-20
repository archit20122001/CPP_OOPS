// Characteristics of a constructor.
// It is declared in the public section of the class.
// They are automatically invoked when an object is created in the class.
// They do not return values and do not have return types.
// We cannot refer to their address.

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    // Constructor is a special member function with same name as of the class. It is used to initialize the objects of the class. It is automatically invoked when an object is created.
    int a,b;
    public:
        Complex(void); //Constructor declaration

        void displayNumber()
        {
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex::Complex(void)  // ----> This is a default constructor as it does not take any parameters.
{
    a=10;
    b=0;
}

int main()
{
    Complex c;
    c.displayNumber();
    return 0;
}