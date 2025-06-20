#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    static int count;//Static data members are allocated members to the class rather than the object. They take memory once in the class and get updated every time they  are called.
    public:
        void Setdata(void)
        {
            cout<<"Enter the id of the employee"<<endl;
            cin>>id;
            count++;
        }
        void Getdata(void)
        {
            cout<<"The id of the employee is "<<id<<" and this is the employee number "<<count<<endl;
        }
        static void getcount(void)
        {
            cout<<"The value of count is "<<count<<endl;
        }
};

int employee::count=1000;

int main()
{
    employee Archit,Anjney,Rohan;
    Archit.Setdata();
    Archit.Getdata();
    employee::getcount();
    Anjney.Setdata();
    Anjney.Getdata();
    employee::getcount();
    Rohan.Setdata();
    Rohan.Getdata();
    employee::getcount();
    return 0;
}