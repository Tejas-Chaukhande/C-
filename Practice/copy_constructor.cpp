#include<iostream>
using namespace std;
class student
{
    public: string name;
             double *cgpaPtr;
            student(string n,double c)
            {
                name=n;
                cgpaPtr=new double;
                *cgpaPtr=c;
            }
            student(student &c)
            {
                name=c.name;
                cgpaPtr=new double;
                *cgpaPtr=*c.cgpaPtr;
            }
            void display()
            {
                cout<<"name: "<<name<<endl;
                cout<<"cgpa: "<<*cgpaPtr<<endl;
            }
};
int main()
{
    student s1("tejas",8.7);
    student s2=s1;   //copy constructor
    s1.display();
    s2.display();
    *(s2.cgpaPtr)=5.2;
    s1.display();
    s2.display();
}