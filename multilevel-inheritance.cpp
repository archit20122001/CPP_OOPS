/*
This is an example of multilevel inheritance
Here Student is the parent class of Exam and Exam is the parent class of Result
Student---->Exam---->Result
*/

#include<bits/stdc++.h>
using namespace std;

class Student
{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number=r;
}

void Student::get_roll_number()
{
    cout<<"The roll number of the student is: "<<roll_number<<endl;
}

class Exam:public Student
{
    protected:
        float maths;
        float chemistry;
        float physics;
    public:
        void set_marks(float,float,float);
        void get_marks();
};

void Exam::set_marks(float m1,float m2,float m3)
{
    maths=m1;
    physics=m2;
    chemistry=m3;
}

void Exam::get_marks()
{
    cout<<"The marks obtained in Maths are: "<<maths<<endl;
    cout<<"The marks obtained in Physics are: "<<physics<<endl;
    cout<<"The marks obtained in Chemistry are: "<<chemistry<<endl;
}

class Result:public Exam
{
    protected:
        float precentage;
    public:
        void display_result()
        {
            get_roll_number();
            get_marks();
            cout<<"Your result is "<<(maths+physics+chemistry)/3<<"%"<<endl;
        }
};

int main()
{
    Result Archit;
    Archit.set_roll_number(42);
    Archit.set_marks(98.5,95.5,90.5);
    Archit.display_result();
    return 0;
}