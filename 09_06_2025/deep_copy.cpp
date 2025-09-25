#include<iostream>
using namespace std;
class student
{
    public: string name;
            double *cgpaPtr;
            student(string name,double cgpa)
            {
                this->name=name;
                cgpaPtr=new double;
                *cgpaPtr=cgpa;
            }
            void display()
            {
                cout<<name<<" "<<*cgpaPtr<<endl;
            }
            student(student &s1)
            {
                this->name=s1.name;
                cgpaPtr=new double;
                *cgpaPtr=*s1.cgpaPtr;
            }
};
int main()
{
    student s1("Tejas",5.7);
    s1.display();
    student s2=s1;
    s2.display();

    *(s2.cgpaPtr)=9.8;
    s1.display();
    s2.display();

    return 0;
}