#include<iostream>
using namespace std;
class Person
{
    public: string name;
            int age;    
            Person()
            {
                cout<<"This is parent constructor...!\n";
            }
            ~Person()
            {
                cout<<"This is parent destructor...!\n";
            }
};
class Student:public Person
{
    public: int roll;
            void showdata();
            Student()
            {
                cout<<"THis is child constructor...!\n";
            }
            ~Student()
            {
                cout<<"THis is child destructor...!\n";
            }
};
void Student::showdata()
{
    cout<<name<<" "<<age<<" "<<roll<<endl;
}
int main()
{
    Student s1;
    s1.name="Tejas";
    s1.age=23;
    s1.roll=53;

    s1.showdata();
}