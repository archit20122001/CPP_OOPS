#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your age\n";
    cin>>a;
    if(a<10)
    {
        cout<<"You are eleigible";
    }
    else if(a==10)
    {
        cout<<"You are eligible but under certain conditions";
    }
    else
    {
        cout<<"You are not eligible";
    }
}