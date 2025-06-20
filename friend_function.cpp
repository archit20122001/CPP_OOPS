// // Properties of Friend functions
// 1. Not in the scope of class, the function is allowed to access private members.
// 2. Since it is not in scope of the class, it cannot be called by any object of the class.
// 3. Can be invoked wothout the help of any object.
// 4. Usually contains the objects as arguments.
// 5. Can be declared inside public or private section of the class.
// 6. Cannot access members directly, it needs object_name.member_name to access any member

#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;
    public:
        void setNumber(int v1, int v2)
        {
            a=v1;
            b=v2;
        }

        friend Complex sumComplex(Complex o1, Complex o2);  //This is friend function declaration.

        void displayNumber()
        {
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.displayNumber();
    c2.setNumber(2,5);
    c2.displayNumber();
    sum=sumComplex(c1,c2);
    sum.displayNumber();
    return 0;
}