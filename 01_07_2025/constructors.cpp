#include<iostream>
using namespace std;
class Student
{
    public: double *CgpaPtr;
             string name;
    public: 
            Student(double ptr,string name)
            {
                CgpaPtr=new double;
                *CgpaPtr=ptr;
                this->name=name;
            }
            void display()
            {
                cout<<*CgpaPtr<<" "<<name<<endl;
            }
            Student(Student &obj)
            {
                CgpaPtr=new double;
                *CgpaPtr=*obj.CgpaPtr;
                name=obj.name;
            }
};
int main()
{
    // Student s1;               //default constructor
    // s1.display();
    Student s1(8.7,"Tejas");  //Parameterised constructor
    s1.display();
    Student s2(s1);          //default copy constructor
    s2.display();
    *(s2.CgpaPtr)=5.2;
    s1.display();
    s2.display();
    return 0;
}