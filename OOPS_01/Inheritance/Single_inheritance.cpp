#include<iostream>
using namespace std;
class Person
{
    protected:string name;
              int age;
    public: Person(string name,int age)
            {
                this->name = name;
                this->age = age;
            }
            void display()
            {
                cout<<"Name: "<<name<<" "<<"age: "<<age<<endl;
            }
};
class Student:public Person
{
    private:int roll;
            float marks;
    public:
           Student(string name,int age,int roll,float marks):Person(name,age)
           {
            this->roll = roll;
            this->marks = marks;
           }
           void display()
           {
            cout<<name<<" "<<age<<" "<<roll<<" "<<marks<<endl;
           }
};
int main()
{
    Student s1("Tejas",23,53,87.5);
    s1.display();
    Person s2("Sanket",24);
    s2.display();
    return 0;
}