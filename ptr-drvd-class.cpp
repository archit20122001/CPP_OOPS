#include <bits/stdc++.h>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying the base class variable " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying the base class varialbe " << var_base << endl;
        cout << "Displaying the derived class variable " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj1;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class
    base_class_pointer->var_base = 34;
    base_class_pointer->display();  //Although the pointer is pointing towards the address of the derived class object, it will still call the display() function of the base class because it is a base class pointer.
    // base_class_pointer->var_derived = 134;  //This will throw an error because var_derived is not a member of the base class.
    // base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 94;
    derived_class_pointer->var_derived = 194;
    derived_class_pointer->display();

    // This is an example of Run time polymorphism where the function to be called is determined at run time, just like the display function which was called during run time and the function to be called was determined at run time.
    return 0;
}