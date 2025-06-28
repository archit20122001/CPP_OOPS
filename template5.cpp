#include<bits/stdc++.h>
using namespace std;

template <class T>
class Archit
{
    public:
        T data;
        Archit(T a)
        {
            data = a;
        }
        void display();
};

template <class T>
void Archit<T> :: display()
{
    cout<<"The output is: "<<data<<endl;
}

void fun(int a)
{
    cout<<"This is a normal function: "<<a<<endl;
}

template <class T>
void fun(T a)
{
    cout<<"This is a templatized function: "<<a<<endl;
}

int main()
{
    Archit <float> obj(5.5);
    obj.display();
    fun(4); // This is an exact match so normal function tales precidence.
    fun<char>('f'); // This is a templatized function so template function takes precidence.
    return 0;
}