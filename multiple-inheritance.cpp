#include<bits/stdc++.h>
using namespace std;

class Base1
{
    protected:
        int base1int;
    public:
        int set_base1int(int a)
        {
            base1int=a;
        }
};

class Base2
{
    protected:
        int base2int;
    public:
        int set_base2int(int b)
        {
            base2int=b;
        }
};

class Base3
{
    protected:
        int base3int;
    public:
        int set_base3int(int c)
        {
            base3int=c;
        }
};

class Derived:public Base1, public Base2, public Base3
{
    public:
        void display(void)
        {
            cout<<"The sum of "<<base1int<<", "<<base2int<<" and "<<base3int<<" is: "<<base1int+base2int+base3int<<endl;
        }
};

int main()
{
    Derived Archit;
    Archit.set_base1int(20);
    Archit.set_base2int(23);
    Archit.set_base3int(37);
    Archit.display();
    return 0;
}