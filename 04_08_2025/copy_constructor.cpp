#include<iostream>
using namespace std;
class Student
{
    public: string name;
            double *cgpaPtr;
            
            Student(string name,double cgpa)
            {
                this->name = name;
                cgpaPtr = new double;
                *cgpaPtr = cgpa;
            }
            Student(Student &obj)
            {
                this->name = obj.name;
                cgpaPtr = new double;
                *cgpaPtr=*obj.cgpaPtr;
            }
            void display()
            {
                cout<<"Name: "<<name<<" "<<"cgpa: "<<*cgpaPtr<<endl;
            }
};
int main()
{
    Student s1("TEjas",8.7);
    s1.display();
    Student s2=s1;
    s2.display();
    *s1.cgpaPtr = 5.8;
    
    cout<<"----------------------\n";
    s1.display();
    s2.display();
    return 0;
}