#include<iostream>
using namespace std;
class Person
{
    protected:int age;
              string name;
              string gender;
              struct Address
              {
                string village;
                string Tq;
                string Dist;
                string State;
                double PIN;
              }Addr;
              Person()
              {
                cout<<"In Person constructor...!\n";
                cout<<"Enter the age: ";
                cin>>age;
                cout<<"Enter the name: ";
                cin>>name;
                cout<<"Enter the Gender: ";
                cin>>gender;
                cout<<"Enter the Adrress: village,Tq,Dist,State,Pin respectively: ";
                cin>>Addr.village>>Addr.Tq>>Addr.Dist>>Addr.State>>Addr.PIN;
              }
              ~Person()
              {
                cout<<"In Person destructor...!\n";
              }
              void Print()
              {
                cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Gender: "<<gender<<endl;
                cout<<"Address: "<<endl;
                cout<<Addr.village<<", "<<Addr.Tq<<" ,"<<Addr.Dist<<" ,"<<Addr.State<<", "<<Addr.PIN<<endl;
              }
};
class Student:public Person
{
    protected: string ID;
               string Qualification;
               double percentage;
               int YOP;
               string college;
               Student()
               {
                cout<<"In Student Constructor...!\n";
                cout<<"Enter Qualification: ";
                cin>>Qualification;
                cout<<"Enter Percentage: ";
                cin>>percentage;
                cout<<"Enter Year of Passing: ";
                cin>>YOP;
                cout<<"Enter college name: ";
                cin>>college;
               }
               ~Student()
               {
                cout<<"In Student Destructor...!\n";
               }
               void Sprint()
               {
                cout<<"Qualification: "<<Qualification<<endl<<"Percentage: "<<percentage<<"%"<<endl<<"Year of Pass: "<<YOP<<endl<<"College :"<<college<<endl;
               }
};
class Employee:public Student
{
    public: string EmpID;
            int YOE;
            string Company;
            string Designation;
            double salary;
            
            Employee()
            {
                cout<<"In Employee Constructor...!\n";
                cout<<"Enter Employee ID: ";
                cin>>EmpID;
                cout<<"Enter Year of Experience: ";
                cin>>YOE;
                cout<<"Enter company name: ";
                cin>>Company;
                cout<<"ENter Designation: ";
                cin>>Designation;
                cout<<"Enter the salary: ";
                cin>>salary;
            }
            ~Employee()
            {
                cout<<"In Employee Destructor...!\n";
            }
            void Person_details()
            {cout<<"-----------------------------------------\n";
                cout<<"Person Detail:"<<endl;
                Person::Print();
            }
            void Qualification_details()
            {cout<<"-----------------------------------------\n";
                cout<<"Qualification Details: "<<endl;
                Student::Sprint();
            }
            void Employee_details()
            {cout<<"------------------------------------------\n";
                cout<<"Employee Details: "<<endl;
                cout<<"Employee ID: "<<EmpID<<endl<<"Company name: "<<Company<<endl<<"Designation: "<<Designation<<endl<<"YOE: "<<YOE <<"years"<<endl<<"Salary: "<<salary<<endl;
            }
};
int main()
{
    Employee E1;
    E1.Person_details();
    E1.Qualification_details();
    E1.Employee_details();
    return 0;
}