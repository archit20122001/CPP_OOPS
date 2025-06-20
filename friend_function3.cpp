#include<bits/stdc++.h>
using namespace std;

class Y;

class X
{
    int a;
    friend void exchange(X &,Y &);
    public:
        void invalue(int a1)
        {
            a=a1;
        }
        void display()
        {
            cout<<a<<endl; 
        }
};

class Y
{
    int b;
    friend void exchange(X &,Y &);
    public:
        void invalue(int b1)
        {
            b=b1;
        }
        void display()
        {
            cout<<b<<endl;
        }
};

void exchange(X &x, Y &y)
{
    int temp=x.a;
    x.a=y.b;
    y.b=temp;
}

int main()
{
    X ox1;
    ox1.invalue(51);
    Y oy1;
    oy1.invalue(23);
    exchange(ox1,oy1);
    cout<<"The value of X after the exchange: ";
    ox1.display();
    cout<<"The value of Y after the exchange: ";
    oy1.display();
    return 0;
}