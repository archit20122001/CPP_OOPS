// Constructor in derived class
/*
Case 1:
class B:public A
{
    order of execution of constructor----> first A(), then B()
};

Case 2:
class A: public B, public C
{
    order of execution of constructor----> first B() because it is written first in the order of parent class, then C() and finally A()
};

Case 3:
class A:public B, virtual public C
{
    order of execution of constructor---->first C(), because it is declared virtual, then B() and then A()
};
*/
#include<bits/stdc++.h>
using namespace std;

class Base1
{
    int data1;
    public:
        Base1(int i)
        {
            data1=i;
            cout<<"Base1 class constructor called"<<endl;
        }

        void printdataBase1()
        {
            cout<<"The value of data1 is: "<<data1<<endl;
        }
};

class Base2
{
    int data2;
    public:
        Base2(int i)
        {
            data2=i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdataBase2()
        {
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};

class Derived: public Base1, public Base2
{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d):Base1(a),Base2(b)
        {
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printdataDerived()
        {
            cout<<"The value of derived 1 is: "<<derived1<<endl;
            cout<<"The value of derived 2 is: "<<derived2<<endl;
        }
};

int main()
{
    Derived Archit(1,2,3,4);
    Archit.printdataBase1();
    Archit.printdataBase2();
    Archit.printdataDerived();
    return 0;
}