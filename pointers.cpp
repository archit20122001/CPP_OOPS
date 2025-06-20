#include<iostream>
using namespace std;
int main()
{
    //what is a pointer-->a datatype which holds the address of another variable.
    int a;
    int*b=&a;
    cout<<"Enter the value of a\n";
    cin>>a;
    //&--->Address of the operator.

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    //*--->(value at) Dereference operator.

    cout<<"The value at address b is "<<*b<<endl;
    
    // pointer to pointer: This is a pointer which stores the address of another pointer and that pointer stores the value of a varible.

    int**c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address of the pointer storing the address of c is "<<**c<<endl;
    return 0;
}