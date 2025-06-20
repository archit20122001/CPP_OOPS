// A copy constructor is a type of constructor which creates a copy of another object. When no copy constructor is found, compiler supplies it's own copy constructor.
#include<bits/stdc++.h>
using namespace std;

class Number
{
    int a;
    public:
    Number()
    {
        a=0;
    }
    Number(int num)
    {
        a=num;
    }
    Number(Number &obj)
    {
        cout<<"Copy constructor called"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); //Copy constructor invoked.
    z1.display();
    z2=z; //Copy constructor not invoked because this is simply assigning the values.
    z2.display();
    Number z3=z; //Copy constructor invoked because the object is being created here.
    z3.display();
    return 0;
}