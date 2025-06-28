#include <bits/stdc++.h>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>

class Archit
{
public:
    T1 a;
    T2 b;
    T3 c;
    Archit(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{
    Archit<> a1(4, 1.2, 'a');
    a1.display();
    cout<<endl;
    Archit<float, char, int> a2(4.5, 'x', 4);
    a2.display();
    return 0;
}