#include<bits/stdc++.h>
using namespace std;

class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id=inpId;
        salary=30.00;
    }
    Employee(){}
};
/*
1. Default visibility mode is private.
2. In private visibility mode: public members of the base class becomes private members of the derived class.
3. In public visibility mode: public members of the base class becomes public members of the derived class.
4. Private members of the base class cannot be inherited.
*/
class Programmer:/*{{Private/Public}}*/Employee
{
    public:
    int languageCode;
    Programmer(int inpId)
    {
        id=inpId;
        languageCode=9;
    }
    void getData()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee Archit(1), Anjney(2);
    cout<<Archit.salary<<endl;
    cout<<Anjney.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    return 0;
}