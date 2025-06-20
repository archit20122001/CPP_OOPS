#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
        void getdata()
        {
            cout<<"The real part is real: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;
        }

        void setdata(int a,int b)
        {
            real=a;
            imaginary=b;
        }
};

int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;
    // c1.setdata(1,50);
    // c1.getdata();
    // (*ptr).setdata(2,10);  // is same as
    ptr->setdata(2,10);
    // (*ptr).getdata(); // is same as
    ptr->getdata();

    // Array of objects
    Complex *ptr1=new Complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();
    return 0;
}