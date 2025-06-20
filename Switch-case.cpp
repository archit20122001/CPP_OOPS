#include<iostream>
using namespace std;
int main()
{
    int age,n,m,l,d,p;
    float y;
    char c,b;
    a:
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"Select the post you want to apply for\n1. Moderator\n2. Administrator\n3. In-game Moderator\n4. Designer\n5. Full scale Developer\n";
        cin>>n;
        switch(n)
        {
            case 1:
            cout<<"For this post you must win 2 out of 5 matches against a Hero and must have a playing experience of atleast 3 months and minimum level required is 25.\n";
            cout<<"\nEnter the matches won, experience and current level\n";
            cin>>m>>y>>l;
            if(m>=2&&y>=3&&l>=25)
            {
                cout<<"Congratulations, you are eligible for the post of a moderator.\nYour rewards and package\n1. MW Discord moderator\n2. Hero title forever\n3. Salary: ₹10,00,000/month\n";
            }
            else
            {
                cout<<"Sorry, you are not eligible for the post\n";
            }
            goto a;
            case 2:
            cout<<"For this post you must win 3 out of 5 matches against a Hero and must have a playing experience of atleast 6 months and minimum level required is 35.\n";
            cout<<"\nEnter the matches won, experience and current level\n";
            cin>>m>>y>>l;
            if(m>=3&&y>=6&&l>=35)
            {
                cout<<"Congratulations, you are eligible for the post of an administrator.\nYour rewards and package\n1. MW Discord administrator\n2. Hero title forever\n3. Salary: ₹50,00,000/month\n";
            }
            else
            {
                cout<<"Sorry, you are not eligible for the post\n";
            }
            goto a;
            case 3:
            cout<<"For this post you must win 4 out of 5 matches against a Hero and must have a playing experience of atleast 9 months and minimum level required is 40.\n";
            cout<<"\nEnter the matches won, experience and current level\n";
            cin>>m>>y>>l;
            if(m>=4&&y>=9&&l>=40)
            {
                cout<<"Congratulations, you are eligible for the post of In-game moderator.\nYour rewards and package\n1. MW moderator\n2. Hero title forever\n3. Salary: ₹70,00,000/month\n";
            }
            else
            {
                cout<<"Sorry, you are not eligible for the post\n";
            }
            goto a;
            case 4:
            cout<<"For this post you must win 5 out of 5 matches against a Hero and must have a playing experience of atleast 1 year and minimum level required is 50 and must know how to use complex designing softwares for the purpose of ship designing.\n";
            cout<<"\nEnter the matches won, experience and current level\n";
            cin>>m>>y>>l;
            if(m==5&&y>=1&&l>=50)
            {
                cout<<"Congratulations, you are eligible for the post of a designer.\nYour rewards and package\n1. MW Designer\n2. Legendary title forever\n3. Salary: ₹1,30,00,000/month\n";
            }
            else
            {
                cout<<"Sorry, you are not eligible for the post\n";
            }
            goto a;
            case 5:
            cout<<"For this post you must win 5 out of 5 matches against a Legendary and must have a playing experience of atleast 1.5 years and minimum level required is 60 and must know about the overall game development project and must have an experience in the field as well.\n";
            cout<<"\nEnter the matches won, experience and current level\n";
            cin>>m>>y>>l;
            if(m==5&&y>=1.5&&l>=60)
            {
                cout<<"Congratulations, you are eligible for the post of Developer.\nYour rewards and package\n1. MW Game Developer\n2. Legendary title forever\n3. Salary: ₹2,30,00,000/month\n";
            }
            else
            {
                cout<<"Sorry, you are not eligible for the post\n";
            }
            goto a;
            default:
            cout<<"Sorry, incorrect choice, enter the correct choice.";
        }
    }
    else
    {
        cout<<"You are not eligible.";
    }
    return 0;
}