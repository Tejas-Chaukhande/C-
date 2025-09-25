//shallow copy deep copy
#include<iostream>
using namespace std;
class Student
{
    private: string name;
             double *cgpaPtr;
    public: Student(string name,double cgpa)
            {
                this->name=name;
                cgpaPtr=new double;
                *(cgpaPtr)=cgpa;
            }
            Student(Student &obj)
            {
                name=obj.name;
                cgpaPtr=new double;
                *(cgpaPtr)=*obj.cgpaPtr;
            }
            void display()
            {
                cout<<"name: "<<name<<" "<<"cgpa: "<<*cgpaPtr<<endl; 
            }
            void change_cgpa(double cgpa)
            {
                *(cgpaPtr)=cgpa;
            }
};
int main()
{
    Student s1("Tejas",8.9);   //parameterised constructor
    s1.display();
    Student s2=s1;             //copy constructor
    s2.display();
    s2.change_cgpa(5.2);     //changed the cgpa value of the student S2
    cout<<"-------------------\n";
    s1.display();
    s2.display();

    return 0;
}

