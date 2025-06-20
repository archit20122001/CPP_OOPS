// There are two types of header files:
// 1. System header files: comes with the compiler.
#include<iostream>
// 2. User defined header files: these files are written by programmer.
/*#include"this.h" --> This will produce an error if this.h is not present in the
current directory.*/
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the operators in C++"<<endl;
    // Arithematic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++ a is "<<++a<<endl;
    cout<<"The value of -- a is "<<--a<<endl;
    cout<<endl;
    //Assignment operator --> Used to assign values to variables.
    // int a=3,b=9;
    // char d='d';
    // Comparison operator;
    cout<<"Following are the types of comparision operators\n";
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"\n";
    // Logical Opertors
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of logical and operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of logical or operator ((a==b)||(a<b)) is "<<((a==b)||(a<b))<<endl;
    cout<<"The value of logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
    return 0;
}