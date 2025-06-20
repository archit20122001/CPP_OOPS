#include<bits/stdc++.h>
using namespace std;

class Simple
{
    protected:
        int a1,b1,sum,difference,product,quotient;
    public:
        int setdatasimple(int x,int y)
        {
            a1=x;
            b1=y;
        }
        void simpleprocess()
        {
            sum=a1+b1;
            difference=abs(a1-b1);
            product=a1*b1;
            quotient=a1/b1;
        }
        void simpledisplay()
        {
            cout<<"The sum is "<<sum<<endl;
            cout<<"The difference is "<<difference<<endl;
            cout<<"The product is "<<product<<endl;
            cout<<"The quotient is "<<quotient<<endl;
        }
};

class Scientific
{
    protected:
        int a2,b2,square,cube,squareroot,cuberoot;
    public:
        int setdatascientific(int x)
        {
            a2=x;
        }
        void scientificprocess()
        {
            square=pow(a2,2);
            cube=pow(a2,3);
            squareroot=sqrt(a2);
            cuberoot=cbrt(a2);
        }
        void scientificdisplay()
        {
            cout<<"The square is "<<square<<endl;
            cout<<"The cube is "<<cube<<endl;
            cout<<"The squareroot of "<<a2<<" is "<<squareroot<<endl;
            cout<<"The cuberoot of "<<a2<<" is "<<cuberoot<<endl;
        }
};

class Hybrid:public Simple, public Scientific
{
    public:
        void set(int a3,int b3)
        {
            setdatasimple(a3,b3);
            setdatascientific(a3);
        }

        void process()
        {
            simpleprocess();
            scientificprocess();
        }

        void display()
        {
            simpledisplay();
            scientificdisplay();
        }
};

int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    Hybrid object1;
    object1.set(a,b);
    object1.process();
    object1.display();
    return 0;
}