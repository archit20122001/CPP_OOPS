#include<bits/stdc++.h>
using namespace std;

class Simple
{
    int d1,d2,d3;
    public:
        // This is an example of constructors with default argument.
        Simple(int a, int b=9, int c=6)
        {
            d1=a;
            d2=b;
            d3=c;
        }
        void display();
};

void Simple::display()
{
    cout<<"The value of d1,d2 and d3 is "<<d1<<","<<d2<<","<<d3<<endl;
}

int main()
{
    Simple a(1);
    a.display();
    Simple b(1,5);
    b.display();
    Simple c(1,5,7);
    c.display();
    return 0;
}