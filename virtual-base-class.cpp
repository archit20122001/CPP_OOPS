#include<bits/stdc++.h>
using namespace std;
/*
            /------>Test--------\
Student-----                     ------->Result
            \------>Sports------/
*/

class Student
{
    protected:
        int rollno;
    public:
        void setnumber(int a)
        {
            rollno=a;
        }
        void printnumber()
        {
            cout<<"Your roll number is: "<<rollno<<endl;
        }
};

class Test:virtual public Student
{
    protected:
        float maths,physics,chemistry;
    public:
        void setmarks(float m1,float m2,float m3)
        {
            maths=m1;
            physics=m2;
            chemistry=m3;
        }
        void printout()
        {
            cout<<"Your result is here:"<<endl;;
            cout<<"Maths: "<<maths<<endl;
            cout<<"Physics: "<<physics<<endl;
            cout<<"Chemistry: "<<chemistry<<endl;
        }
};

class Sports:virtual public Student
{
    protected:
        float score;
    public:
        void setscore(float sc)
        {
            score=sc;
        }
        void printscore()
        {
            cout<<"The PTE score is: "<<score<<endl;
        }
};

class Result:public Test, public Sports
{
    private:
        float total;
    public:
        void display()
        {
            total=maths+physics+chemistry+score;
            printnumber();
            printout();
            printscore();
            cout<<"Your total scaor is: "<<total<<endl;
        }
};

int main()
{
    Result Archit;
    Archit.setnumber(42);
    Archit.setmarks(98.0,95.5,96.5);
    Archit.setscore(9);
    Archit.display();
    return 0;
}