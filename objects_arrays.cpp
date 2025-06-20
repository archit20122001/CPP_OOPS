#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    int salary;
    public:
        void setid(void)
        {
            salary=100;
            cout<<"Enter the id of the employee: "<<endl;
            cin>>id;
        }
        void getid(void)
        {
            cout<<"The id of this employee is "<<id<<endl;
        }
};

int main()
{
    employee meta[4];
    for(int i=0;i<4;i++)
    {
        meta[i].setid();
        meta[i].getid();
    }
    return 0;
}