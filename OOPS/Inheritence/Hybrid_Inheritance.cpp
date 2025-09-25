/*Solving Diamond Problem

            Student 
            /     \
           /       \
        EXTC      Sport
          \         /
           \       /
             Result

When two classes (EXTC and Sport) inherit from a common base class (Student), 
and a class (Result) inherits from both, this creates a diamond-shaped hierarchy.

If virtual inheritance is not used, the Result class ends up with two separate copies of Student,
one via EXTC, and one via Sport, 

SO, because of Two copies of student class, compiler gets confunsed (Ambiguity),
from where name and stPrint() should be take.abort

So, in such case, use "virtual" keyword while doing "Hierarchy" Inheritance 
(Ex. class EXTC : virtual public Student
     class Sport : virtual public Student)

So in the Result class, there will be only one copy of Student, eliminating ambiguity and saving memory.
*/

#include<iostream>
using namespace std;
class Student
{
    protected:
            int roll;
            string name;
            Student()
            {
                cout<<"In stduent Constructor...!\n";
                cout<<"ENter the Name: ";
                cin>>name;
                cout<<"Enter the Roll: ";
                cin>>roll;
            }
            ~Student()
            {
                cout<<"In Student Destructor...!\n";
            }
            void stPrint()
            {
                cout<<"Name: "<<name<<endl;
                cout<<"Roll: "<<roll<<endl;
            }
};
class EXTC:virtual public Student     
{
    protected:
            string branch;
            float marks[5];   // Marks of 5 subject

            EXTC()
            {
                cout<<"In EXTC Constructor...!\n";
                cout<<"ENter the Branch name: ";
                cin>>branch;
                cout<<"Enter the marks for 5 subject: ";
                for(int i=0;i<5;i++)
                {
                    cin>>marks[i];
                }
            }
            ~EXTC()
            {
                cout<<"In EXTC Destructor...\n";
            }
            void exPrint()
            {
                cout<<"Branch: "<<branch<<endl;
                cout<<"marks: ";
                for(int i=0;i<5;i++)
                {
                    cout<<marks[i]<<" ";
                }
                cout<<endl;
            }
};
class Sport:virtual public Student
{
    protected:
             float height;
             float weight;
             string sgrade;
             Sport()
             {
                cout<<"In Sport Constructor...!\n";
                cout<<"Enter Height in feet: ";
                cin>>height;
                cout<<"Enter Weight in KG: ";
                cin>>weight;
                cout<<"Enter Grade: ";
                cin>>sgrade;
             }
             ~Sport()
             {
                cout<<"In Sport Destructor...!\n";
             }
             void spPrint()
             {
                cout<<"Height: "<<height<<" Feet"<<endl;
                cout<<"Weight: "<<weight<<" KG"<<endl;
                cout<<"Grade: "<<sgrade<<endl;
             }
};
class Result:public EXTC,public Sport
{
    protected:float total_marks;
              float percentage;
              string grade;
    public:   Result()
              {
                total_marks = percentage =0;
              }
              void cal_total_marks()
              {
                for(int i=0;i<5;i++)
                {
                    total_marks=total_marks + marks[i];
                }
              }
              void cal_percentage()
              {
                percentage=total_marks/5;
              }
              void cal_grade()
              {
                if(percentage<40)
                {
                    grade="C";
                }
                else if(percentage>=40 && percentage<50)
                {
                    grade="B";
                }
                else if(percentage>=50 && percentage<60)
                {
                    grade="B+";
                }
                else if(percentage>=60 && percentage<70)
                {
                    grade="A";
                }
                else if(percentage>=80 && percentage<90)
                {
                    grade="A+";
                }
                else{
                    grade="A++";
              }
            }
            void Print()
            {
                Student::stPrint();
                EXTC::exPrint();
                Sport::spPrint();
                cout<<"Total marks: "<<total_marks<<endl;
                cout<<"Percentage: "<<percentage<<endl;
                cout<<"Grade: "<<grade<<endl;
            }
            ~Result()
            {
                cout<<"In Result Destructor...!\n";
            }
};
int main()
{
    Result obj;
    obj.Print();
    return 0;
}