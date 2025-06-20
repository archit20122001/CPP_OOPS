#include<bits/stdc++.h>
using namespace std;

class Empolyee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);
        // {
        //     a=a1;
        //     b=b1;
        //     c=c1;
        // }
        void getdata()
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void Empolyee::setData(int a1, int b1, int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Empolyee archit;
    archit.setData(1,2,3);
    // archit.a=55; This will throw error because a is a private variable, hence cannot be accessed directly in the main function.
    archit.d=4;
    archit.e=5;
    archit.getdata();
    return 0;
}