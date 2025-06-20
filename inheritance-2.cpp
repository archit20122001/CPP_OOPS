// This is the example for single inheritance
#include<bits/stdc++.h>
using namespace std;

class Base
{
    int data1; //Private by default and not inheritable.
    public:
        int data2;
        void setdata(int, int);
        int getdata1();
        int getdata2();
};

void Base::setdata(int d1,int d2)
{
    data1=d1;
    data2=d2;
}

int Base::getdata1()
{
    return data1;
}

int Base::getdata2()
{
    return data2;
}

class Derived:public Base
{
    int data3;
    public:
        void process();
        void display();
};

void Derived::process()
{
    data3=data2*getdata1();
}

void Derived::display()
{
    cout<<"The value of data 1 is "<<getdata1()<<endl;
    cout<<"The value of data 2 is "<<data2<<endl;
    cout<<"The value of data 3 is "<<data3<<endl;
}

int main()
{
    Derived der;
    der.setdata(20,30);
    der.process();
    der.display();
    return 0;
}