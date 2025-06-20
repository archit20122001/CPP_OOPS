#include<bits/stdc++.h>
using namespace std;

// class Professor
// {
//     private:
//         float salary;

//     public:
//         string name;
//         string dept;
//         string sub;
// //This is a non parameterised type constructor
//         Professor()
//         {
//             cout<<"Hi, I am professor ";
//         }
// //This is a parameterised type constructor
//         Professor(string name, string dept,string sub, float salary)
//         {
//             // this is special pointer that points at the current object
//             this->name=name;
//             this->dept=dept;
//             this->sub=sub;
//             this->salary=salary;
//         }
// // This is a custom copy constructor
//         Professor(Professor &orgp1)
//         {
//             cout<<"This is a custom copy constructor\n";
//             this->name=orgp1.name;
//             this->dept=orgp1.dept;
//             this->sub=orgp1.sub;
//             this->salary=orgp1.salary;
//         }

//     void changeDept(string newDept)
//     {
//         dept = newDept;
//     }
    
//     void setSalary(float s)
//     {
//         salary=s;
//     }
//     float getSalary()
//     {
//         return salary;
//     }
//     void getInfo()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Department: "<<dept<<endl;
//         cout<<"Subject: "<<sub<<endl;
//         cout<<"Salary: "<<salary<<endl;
//     }
// };

class Student
{
    public:
    string name;
    // double cgpa;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        cout<<"This is a custom copy constructor\n";
        // this->name = obj.name;
        // this->cgpa = obj.cgpa;
        this->cgpaPtr = obj.cgpaPtr;
        cgpaPtr=new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout<<"Name: "<<name<<endl;
        // cout<<"CGPA: "<<cgpa<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main()
{
//     Professor p1("Archit", "AIML", "OOPS", 40000);
// // This is default copy constructor
//     Professor p2(p1);
//     // p1.name="Archit";
//     // p1.sub="DSA";
//     // p1.setSalary(50000);
//     // cout<<p1.name<<endl;
//     // cout<<p1.getSalary()<<endl;
//     // cout<<p1.dept<<endl;
//     // p1.getInfo();
//     p2.getInfo();

    Student s1("Archit Kumar Singh", 8.9);
    s1.getInfo();
    Student s2(s1);
    s2.name= "Rohan Agarwal";
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();
    s2.getInfo();
    return 0;
}