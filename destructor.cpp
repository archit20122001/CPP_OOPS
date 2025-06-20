#include<bits/stdc++.h>
using namespace std;

// Destructor never takes any argument nor does it return any value.
int count=0;
class Num
{
    public:
    int count=0;
    Num()
    {
        count++;
        cout<<"This is time when the constructor is called for the object number"<<count<<endl;
    }
    ~Num()
    {
        cout<<"This is the time when the destructor is called to the object number"<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1: "<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}