#include<iostream>
using namespace std;
class Student
{
    private:int roll;
            string name;
    public: static int cnt;
            Student()
            {
                cnt++;
            }
            Student(string name, int roll)
            {
                this->name = name;
                this->roll = roll;
                cnt++;
            }
            void display()
            {
                cout<<"Name: "<<name<<" "<<"Roll: "<<roll<<endl;
            }
};
int Student::cnt;        //To access static data members there is need to define it outside the classs.
int main()
{
    Student s1("Tejas",53),s2("Sanket",47),s3,s4;
    s1.display();
    s2.display();
    cout<<Student::cnt;    //without object also can access.
    return 0;
}