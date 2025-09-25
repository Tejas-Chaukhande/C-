/*
Hierarchical Inheritance: From one parent deriving multiple child classes (Tree like structure)
*/
#include<iostream>
using namespace std;
class Person
{
    protected:string name;
              int age;
              long int mob;
     public: Person(string name,int age,long int mob)
              {
                cout<<"In Person Constructor...!\n";
                this->name=name;
                this->age=age;
                this->mob=mob;
              }
             virtual void display()  //If we don't make this function as "virtual",if we called through base class pointer it will always call to parent class function
              {
                cout<<"Person Name: "<<name<<endl<<"Perosn age: "<<age<<endl<<"Person mob: "<<mob<<endl;
              }
              ~Person()
              {
                cout<<"Person Destructor...!\n";
              }
};
class Student:public Person
{
    private:int roll;
            string college;
    public: Student(string name,int age,long int mob,int roll,string college):Person(name,age,mob)
            {
                cout<<"In Student Constructor...!\n";
                this->roll=roll;
                this->college=college;
            }
            void display()
            {
                cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Mob: "<<mob<<endl<<"Roll: "<<roll<<endl<<"Collge: "<<college<<endl;
            }
            ~Student()
            {
                cout<<"Student Destructor...!\n";
            }
};
class Employee:public Person
{
    private:string designation;
            double salary;
    public:Employee(string name,int age,long int mob,string designation,double salary):Person(name,age,mob)
           {
                cout<<"In Employee Constructor...!\n";
                this->designation=designation;
                this->salary=salary;
           }
           void display()
           {
            cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Mob: "<<mob<<endl<<"Designation: "<<designation<<endl<<"salary: "<<salary<<endl;
           }
           ~Employee()
           {
            cout<<"Employee Destructor...!\n";
           }

};
int main()
{
    Person *ptr;   //Base pointer which hold the address of child class
    Employee e1("Tejas",23,992253,"Embedded Engineer",25000);
    Student s1("Prasad",21,93706,53,"Rammeghe college");
    ptr=&e1;
    ptr->display();        //Always call to base class function if virtual not used in parent class.(dynamically calling)

    ptr=&s1;
    ptr->display();
    //e1.display();      //always call to overrided function   (statically calling)
    return 0;
}