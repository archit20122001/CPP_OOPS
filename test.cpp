#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string s="";
    for(int i=0;i<10;i++)
    {
        a=rand()%10;
        s+=a+'0';
    }
    cout<<s<<endl;
}