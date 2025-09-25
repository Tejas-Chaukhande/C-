#include<iostream>
using namespace std;
class Student
{
    private: int roll;
             string name;
    public: static int cnt;
            Student(string name,int roll)
            {
                this->roll = roll;
                this->name = name;
                cnt++;
            }
};
int Student::cnt;
int main()
{
    Student s1("Tejas",53);
    Student s2("Sanket",47);
    Student s3("Prasad",57);
    Student s4("Amit",45);
    cout<<"No. of objects created: "<<Student::cnt;
    return 0;
}