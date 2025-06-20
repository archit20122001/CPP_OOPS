#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    int a,b;
    public:
        void getsimpledata()
        {
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;
        }

        void performsimpleoperations()
        {
            cout<<"The sum of a and b is: "<<a+b<<endl;
            cout<<"The difference of a and b is: "<<abs(a-b)<<endl;
            cout<<"The product of a and b is: "<<a*b<<endl;
            cout<<"The quotient of a by b is: "<<a/b<<endl;
        }
};

class ScientificCalculator
{
    int a;
    public:
        void getscientificdata()
        {
            cout<<"Enter the value of a: ";
            cin>>a;
        }

        void performscientificoperations()
        {
            cout<<"The value of cos a is: "<<cos(a)<<endl;
            cout<<"The value of sin a is: "<<sin(a)<<endl;
            cout<<"The value of exponent of a is: "<<exp(a)<<endl;
            cout<<"The value of tan of a is: "<<tan(a)<<endl;
        }
};

class Hybridcalculator: public SimpleCalculator, public ScientificCalculator
{
    
};

int main()
{
    Hybridcalculator calci;
    calci.getsimpledata();
    calci.performsimpleoperations();
    calci.getscientificdata();
    calci.performscientificoperations();
    return 0;
}