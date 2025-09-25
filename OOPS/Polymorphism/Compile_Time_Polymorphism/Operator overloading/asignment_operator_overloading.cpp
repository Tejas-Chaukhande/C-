#include<iostream>
using namespace std;
class Student
{
    private: int roll;
    public:
            void input();
            void print();
            Student operator =(Student &);
};
Student Student::operator =(Student &C)
{
    this->roll=C.roll;
    return *this;
}
void Student::input()
{
    cout<<"Enter the roll: ";
    cin>>roll;
}
void Student::print()
{
    cout<<"Roll no: "<<roll<<endl;
}
int main()
{
    Student s1,s2;
    s1.input();
    s1.print();
    
    s2=s1;   //s2.operator=(s1)
    s2.print();
    return 0;
}