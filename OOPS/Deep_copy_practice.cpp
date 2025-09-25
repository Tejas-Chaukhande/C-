#include<iostream>
using namespace std;
class Student
{
    public: string name;
            double *Ptr;
            Student(string name,double cgpa)
            {
                this->name=name;
                Ptr=new double;
                *Ptr=cgpa;
            }
            Student(Student &c)
            {
                this->name=c.name;
                Ptr=new double;
                *Ptr=*c.Ptr;
            }
            void display()
            {
                cout<<"Name: "<<name<<endl;
                cout<<"Cgpa: "<<*Ptr<<endl;
            }
};
int main()
{
    Student S1("Tejas",9.8);
    S1.display();

    Student S2(S1);
    S2.display();
    cout<<"-----------------------\n";
    *(S2.Ptr)=6.5;
    S2.name="Sanket";
    S2.display();

    S1.display();
    return 0;
}