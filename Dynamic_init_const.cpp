#include<bits/stdc++.h>
using namespace std;

class Interest_Calculator
{
    int principal,time,amount;
    float rate;
    public:
    Interest_Calculator(){}
    Interest_Calculator(int p,float r,int t);
    Interest_Calculator(int p, int r, int t);
    void display();
};

Interest_Calculator::Interest_Calculator(int p,float r,int t)
{
    principal=p;
    time=t;
    rate=r;
    amount=principal;
    for(int i=0;i<t;i++)
    {
        amount=amount*(1+rate);
    }
}

Interest_Calculator::Interest_Calculator(int p,int r,int t)
{
    principal=p;
    time=t;
    rate=float(r)/100;
    amount=principal;
    for(int i=0;i<t;i++)
    {
        amount=amount*(1+rate);
    }
}

void Interest_Calculator::display()
{
    cout<<"The principal is "<<principal<<" and the rate of interest is "<<rate<<". The amount in "<<time<<" years will be "<<amount+1<<endl;
}

int main()
{
    int p,r,t;
    float R;
    Interest_Calculator i1,i2;
    cout<<"Enter the principal, rate(in decimal) and time: ";
    cin>>p>>R>>t;
    i1=Interest_Calculator(p,R,t);
    i1.display();
    cout<<"Enter the principal, rate(in %) and time: ";
    cin>>p>>r>>t;
    i2=Interest_Calculator(p,r,t);
    i2.display();
    return 0;
}