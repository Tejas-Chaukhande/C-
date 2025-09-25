/*
Pure virtual function:- 
     a virtual function that has no implementation in the base class and must be overridden
in any derived class.

Note:-
    1.If a class contains at least one "Pure virtual function" that class called "Abstract class".
    2.We can not create the objects of abstract class, can create "pointer" and "reference".
    3.If child class overrides and implement the "pure virtual function" that class called "Concrete class". 
*/
//This is the example of "Pure Runtime Polymorphism"
#include<iostream>
using namespace std;
class Person
{
    protected:string name;
            int age;
            string city;
    public: Person(string name,int age,string city)
            {
                cout<<"In Person Constructor...!\n";
                this->name=name;
                this->age=age;
                this->city=city;
            }
            virtual void display()=0; //pure virtual function, hence it is abstract class
};
class Student:public Person
{
    private: int roll;
             float marks;
    public:Student(string name,int age,string city,int roll,float marks):Person(name,age,city)
           {
            cout<<"In Student constructor...!\n";
            this->roll=roll;
            this->marks=marks;
           }
           void display()
           {
            cout<<"-------Student Details--------\n";
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"City: "<<city<<endl;
            cout<<"Roll: "<<roll<<endl;
            cout<<"Marks: "<<marks<<endl;
           }

};
class Employee:public Person
{
    private: string designation;
             double salary;
    public: Employee(string name,int age, string city, string des,double sal):Person(name,age,city)
            {
                cout<<"In Employee Constructor...!\n";
                designation=des;
                salary=sal;
            }
            void display()
            {
                cout<<"-------Employee Details--------\n";
                cout<<"Name: "<<name<<endl;
                cout<<"Age: "<<age<<endl;
                cout<<"City: "<<city<<endl; 
                cout<<"Designation: "<<designation<<endl;
                cout<<"Salary: "<<salary<<endl;

            }

};
int main()
{
   Person *ptr=NULL; //base class pointer for data binding
    
   Employee e("Tejas",23,"Banglore","C++ Firmware Developer",25000);
  // Person p("Prasad",20,"Amravati");        //can not create the object for abstract class
   Student s("Sanket",24,"Lakhad",53,87); 

   ptr=&e;  
   ptr->display(); //Calls Employee::display()
   ptr=&s;
   ptr->display(); //Calls Student::display()
   return 0;
}