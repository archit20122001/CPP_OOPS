/*
    Members     |   Public Derivation   |    Private Derivation  |   Protected Derivation
1. Private      |     Not inherited     |      Not inherited     |     Not inherited
2. Protected    |       Protected       |         Private        |       Protected
3. Public       |         Public        |         Private        |       Protected
*/
#include<bits/stdc++.h>
using namespace std;

class Base
{
    private:
        int a;
    protected:
        int b;
};
class Derived: protected Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout<<b.b;   Will not work because b is proteceted in both base and derived class.
    return 0;
}