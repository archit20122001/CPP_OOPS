#include<bits/stdc++.h>
using namespace std;

class Y;

class X
{
    int data;
    public:
        void setvalue(int value)
        {
            data=value;
        }
        friend void addsum(X,Y);
};

class Y
{
    int num;
    public:
        void setvalue(int value)
        {
            num=value;
        }
        friend void addsum(X,Y);
};

void addsum(X o1, Y o2)
{
    cout<<"The sum of data of X and Y is: "<<o1.data+o2.num<<endl;
}

int main()
{
    X x1;
    x1.setvalue(2);
    Y y2;
    y2.setvalue(5);
    addsum(x1,y2);
    return 0;
}