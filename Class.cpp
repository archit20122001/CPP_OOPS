#include<bits/stdc++.h>
using namespace std;
class Details
{
    public:
    string Name, Department, section, admission;
    int roll;
};
int main()
{
    Details Student1,Student2;
    Student1.Name="Archit Kumar Singh";
    Student1.Department="Information Technology";
    Student1.section="A";
    Student1.admission="2021B0131126";
    cout<<Student1.Name<<endl;
    Student2.Name="Devansh Karnwal";
    Student2.Department="Information Technology";
    Student2.section="A";
    Student2.admission="2021B0131042";
    cout<<Student2.Name<<endl;
    cout<<Student1.Name<<" "<<Student1.Department<<" "<<Student1.section<<" "<<Student1.admission;
    return 0;
}