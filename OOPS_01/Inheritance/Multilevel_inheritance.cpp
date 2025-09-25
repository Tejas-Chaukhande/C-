#include<iostream>
using namespace std;
class Person
{
    protected: string name;
               int age;
               char gender;
    public:Person(string name,int age,char gender)
           {
            this->name = name;
            this->age = age;
            this->gender = gender;
           }
           void Print()
           {
            cout<<"Name: "<<name<<" "<<"Age: "<<age<<" "<<"Gender: "<<gender<<endl;
           }
};
class Student:protected Person
{
    protected: int roll;
               float per;
               string college;
    public:Student(string name,int age,char gender,int roll,float per,string college):Person(name,age,gender)
           {
            this->roll = roll;
            this->per = per;
            this->college = college;
           }
           void Print()
           {
            Person::Print();
            cout<<"Roll: "<<roll<<" "<<"Per: "<<per<<" "<<"college: "<<college<<endl;
           }
};
class Employee:public Student
{
    private: string emp_id;
             string company_name;
             double salary;

    public: Employee(string name,int age,char gender,int roll,float per, string college,string emp_id,string company_name,double salary):Student(name, age,gender,roll,per,college)
            {
                this->emp_id = emp_id;
                this->company_name = company_name;
                this->salary = salary;
            }
            void Print()
            {
                Student::Print();
                cout<<"Emp_id: "<<emp_id<<" "<<"company: "<<company_name<<" "<<"Salary: "<<salary<<endl;
            }
};   
int main()
{
    Employee e1("TEjas",23,'M',53,87.8,"Pote college","280073","UST",25000);
    e1.Print();
    return 0;

} 
