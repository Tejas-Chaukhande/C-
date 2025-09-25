#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    float marks; 
    static string standard;   //for all object it will take common memory

public:
    Student(int roll, float marks, string std)
    {
        this->roll = roll;
        this->marks = marks;
        standard = std;  // assign to static variable
    }

    void showdata()
    {
        cout << roll << " " << marks << " " << standard << endl;
    }
};

// Define the static member outside the class
string Student::standard = "";

int main()
{
    Student s1(53, 87, "12th");
    s1.showdata();

    Student s2(54, 88, "10th");
    s2.showdata();  // Will show updated static value
    s1.showdata();

    return 0;
}
