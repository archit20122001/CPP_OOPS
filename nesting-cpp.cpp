// C++ --> initially called C with classes by Stroustroup
// classes --> extention of structures in C
// structures had limitations
// --> members are public
// --> No methods
// classes --> structure + more
// classes can have methods and properties
// classes can make few members as private and few as public
// strucutres in c++ are typedefed
// objects can be declared right after and along with the class declaration
// private members cannot be accessed directly, only through methods in the class itself.
// nesting of member functions

#include <bits/stdc++.h>
using namespace std;

class binary
{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void);
        void ones_complement(void);
        void display(void);
};

void binary::read(void)
{
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary::chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='0' && s[i]!='1') 
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    chk_bin();
    for (int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
            s.at(i)='1';
        else
            s.at(i)='0';
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for(int i=0; i<s.length();i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    b.display();
    return 0;
}