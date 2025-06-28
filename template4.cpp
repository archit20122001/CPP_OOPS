#include<bits/stdc++.h>
using namespace std;

template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swaap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = average(5,2);
    cout<<fixed<<setprecision(3)<<a<<endl;
    int x =1,y = 3;
    cout<<x<<" "<<y<<endl;
    swaap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}