#include<iostream>
using namespace std;
int main()
{
    // Basic Control Structure
    //1. Sequence structure
    //2. solution structure
    //3. loop structure

    // 1. If Else statement
    // 2. Else If ladder
    // 3. Switch case

    // Selection control structure- If else ladder
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    // if(age<18 && age>0)
    // {
    //     cout<<"You can not come to my party.";
    // }
    // else if(age==18)
    // {
    //     cout<<"You are a kid and you will get a kid pass to the party.";
    // }
    // else if(age<=0)
    // {
    //     cout<<"You are not even born.";
    // }
    // else
    // {
    //     cout<<"You can come to my party.";
    // }
    // return 0;

    // selection control structure- Switch case
    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    
    case 22:
        cout<<"You are 22";
        break;

    case 2:
        cout<<"You are 2";
        break;
    default:
    cout<<"No special cases";
        break;
    }
}