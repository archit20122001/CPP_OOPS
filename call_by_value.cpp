#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}
// This will not swap the a and b.
void swap(int a, int b)
{                   //temp  a   b
    int temp;
    temp=a;           //4   4   5
    a=b;              //4   5   5
    b=temp;           //4   5   4
}
// Call by reference using pointer.
void swapPointer(int *a, int *b)
{                   //temp  a   b
    int temp;
    temp=*a;          //4   4   5
    *a=*b;            //4   5   5
    *b=temp;          //4   5   4
}
// Call by reference using C++ reference variable.
void swapReferenceVar(int &a, int &b)
{                   //temp  a   b
    int temp;
    temp=a;           //4   4   5
    a=b;              //4   5   5
    b=temp;           //4   5   4
}
// int & swapReferenceVar(int &a, int &b)
// {                   //temp  a   b
//     int temp;
//     temp=a;           //4   4   5
//     a=b;              //4   5   5
//     b=temp;           //4   5   4
//     return a;
// }

int main()
{
    int x=4,y=5;
    // cout<<"Enter the value of x and y: ";
    // cin>>x>>y;
    cout<<"Before swapping, the value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    // swap(x,y); This will not swap the values.
    // swapPointer(&x,&y); This will swap a and b using pointer
    swapReferenceVar(x,y); //This will swap a and b using reference variable
    cout<<"After swapping, the value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    // swapReferenceVar(x,y)=256;// This will give the value the value of reference in a which has now been changed to the user input.
    // cout<<"After swapping, the value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    cout<<"The sum of x and y is: "<<sum(x,y);
    return 0;
}