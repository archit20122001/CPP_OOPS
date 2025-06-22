#include<bits/stdc++.h>
using namespace std;
class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "1 Displaying the base class variable " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "2 Displaying the base class variable " << var_base << endl;
        cout << "2 Displaying the derived class variable " << var_derived << endl;
    }
};

int main()
{
   BaseClass *base_class_pointer;
   BaseClass obj_base;
   DerivedClass *derived_class_pointer;
   DerivedClass obj_derived;
   base_class_pointer = &obj_derived;
   base_class_pointer->var_base = 10;
   derived_class_pointer = &obj_derived;
//    derived_class_pointer->var_base = 100;
   derived_class_pointer->var_derived = 1000;
   base_class_pointer->display();
//    derived_class_pointer->display();
   return 0;
}