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
                *cgpaPtr=cgpa;
            }
            void showdata()
            {
                cout<<name<<" "<<*cgpaPtr<<endl;
            }
            Student(Student &C)
            {
                this->name=C.name;
                cgpaPtr=new double;   //new copy created for the cgpaPtr, to store address of cgpa
                *cgpaPtr=*C.cgpaPtr;
            }
            ~Student()
            {
                cout<<"Deleting everyting...\n";
                delete cgpaPtr;
            }


};
int main()
{
    Student s1("Tejas",5.2);
    s1.showdata();

    Student s2=s1;   //Student s2(s1);
    s2.showdata();

    *(s2.cgpaPtr)=9.1;
    cout<<"-----------------\n";
    s1.showdata();
    s2.showdata();

}