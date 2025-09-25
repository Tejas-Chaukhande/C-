#include<iostream>
using namespace std;
class Student
{
    public: string name;
            double *cgpaPtr;
            Student(string name,double cgpa)
            {
                this->name=name;
                cgpaPtr=new double;
                *(cgpaPtr)=cgpa;
            }
            Student(Student& c)
            {
                this->name=c.name;
                cgpaPtr=new double;
                *(cgpaPtr)=*c.cgpaPtr;
            }
            friend void display(Student &);

};
void display(Student &c)
{
    cout<<"name: "<<c.name<<endl;
    cout<<"cgpa: "<<*c.cgpaPtr<<endl;
}
int main()
{
    Student s1("Tejas",9.8);
    display(s1);
    
    Student s2=s1;     //copy constructor
    display(s2);

    *(s2.cgpaPtr)=5.2;
    display(s1);
    display(s2);
    return 0;

}