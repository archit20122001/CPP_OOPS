#include<bits/stdc++.h>
using namespace std;
// "typedef" can be used for providing custom name to the structure and this avoids the need of writing "struct" followed by name of the structure before every declaration.
typedef struct employee
{
    int eID;
    char nickname;
    float salary;
}emp;

// Union lets us to use only one variable at a time and allocates memory according to the highest memory contained in the data.

union money
{
    int rice; //4
    char car; //1
    float pounds; //4
};

int main()
{
    // since typedef is used, so instead of writing "struct employee archit", we can simply use "emp".
    union money m1;
    m1.rice = 22;
    m1.car = 'c';
    cout<<m1.rice<<endl;
    emp archit;
    archit.eID = 1;
    archit.nickname = 'A';
    archit.salary = 50000000.00;
    cout<<"The value of "<<archit.eID<<endl;
    cout<<"The value of "<<archit.nickname<<endl;
    cout<<"The value of "<<archit.salary<<endl;
    cout<<"The value of "<<archit.varchar<endl;
    return 0;
}