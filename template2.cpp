#include<bits/stdc++.h>
using namespace std;

/*
template<class T1, class T2,....(Multiple comma seperated)>
class nameOfClass
{
    //body
}
*/

template<class T1, class T2>
class A
{
    public:
        T1 data1;
        T2 data2;

        A(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2;
        }
};

int main()
{
    A<float,char> obj1(1.5,'a');
    obj1.display();
    return 0;
}