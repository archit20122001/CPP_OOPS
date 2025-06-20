#include<bits/stdc++.h>
using namespace std;
class Car
{
    public:
    string Color, RegNo;
    int weight;
    bool start()
    {
        return true;
    }
    bool stop()
    {
        return true;
    }
};
int main()
{
    Car obj1, obj2, obj3;

    obj1.Color= "Green\n";
    obj1.RegNo= "KA-01-1234\n";
    obj1.weight= 1500;
    cout<<"\n"<<obj1.Color<<" "<<obj1.RegNo<<" "<<obj1.weight<<"\n";
    bool obj1Status=obj1.start();
    if(obj1Status)
    {
        cout<<"Car started successfully\n";
    }
    if(obj1.stop())
    {
        cout<<"Car stopped successfully\n";
    }

    obj2.Color= "Grey\n";
    obj2.RegNo= "KA-01-5236\n";
    obj2.weight= 500;
    cout<<"\n"<<obj2.Color<<" "<<obj2.RegNo<<" "<<obj2.weight<<"\n";
    bool obj2Status=obj2.start();
    if(obj2Status)
    {
        cout<<"Car started successfully\n";
    }
    if(obj2.stop())
    {
        cout<<"Car stopped successfully\n";
    }

    obj3.Color= "Blue\n";
    obj3.RegNo= "KA-01-2341\n";
    obj3.weight= 1700;
    cout<<"\n"<<obj3.Color<<" "<<obj3.RegNo<<" "<<obj3.weight<<"\n";
    bool obj3Status=obj3.start();
    if(obj3Status)
    {
        cout<<"Car started successfully\n";
    }
    if(obj3.stop())
    {
        cout<<"Car stopped successfully\n";
    }
    return 0;
}