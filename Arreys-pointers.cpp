#include<iostream>
using namespace std;
int main()
{
    //  
    // arrey example

    int marks[4]={23, 45, 34, 24};
    int mathmarks[4];
    mathmarks[0]=2278;
    mathmarks[1]=278;
    mathmarks[2]=783;
    mathmarks[3]=78;

    cout<<"These are maths marks\n";

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    marks[2]=455;//You can change the value of an arrey


    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // for(int i=0;i<4;i++)
    // {
    //     cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i=0;
    // while(i<4)
    // {
    //     cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    
    // int i=0;
    // do
    // {
    //     cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    // while(i<4);
    
    // pointers and arrey
    int*p=marks;
    cout<<"The value of marks[0] is "<<*p;
    return 0;
}