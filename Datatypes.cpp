#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    int a;
    cout<<glo;
}
int main()
{
    int glo=9;
    glo=78;
    int a=4,b=5;
    float pi=3.14;
    char c='u';
    bool d=true;
    sum();
    cout<<glo<<d;
    /*cout<<"This is tute 4.\nHere is the value of a is"<<a<<".\nThis is the
    value of b "<<b;
     cout<<"\nThe value of pi is: "<<pi;
     cout<<"\nThe value of c is: "<<c;*/
    return 0;
}