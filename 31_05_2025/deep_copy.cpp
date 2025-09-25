#include<iostream>
using namespace std;
class Student
{
    public: string name;
             double *cgpaPtr;
    public: Student(string n,double c)
            {
                name=n;
                cgpaPtr=new double;
                *cgpaPtr=c;
            }
            Student(Student &c)
            {
                this->name=c.name;
                cgpaPtr=new double;
                *cgpaPtr=*c.cgpaPtr;
            }
            void display()
            {
                cout<<name<<" "<<*cgpaPtr<<endl;
            }
};
int main()
{
    Student s1("tejas",8.9);
    Student s2(s1);
    s1.display();
    s2.display();

    *(s2.cgpaPtr)=5.2;
    cout<<*(s1.cgpaPtr)<<endl;
    cout<<*(s2.cgpaPtr)<<endl;

}