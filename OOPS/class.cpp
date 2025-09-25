#include<iostream>
using namespace std;
class student
{
    private:int roll;
            float marks;
            string name;
    public:void setdata(int,float,string);
           void showdata();
};
void student::setdata(int r,float m,string n)
{
    roll=r;marks=m;name=n;
}
void student::showdata()
{
    cout<<roll<<" "<<marks<<" "<<name<<endl;
}
int main()
{
    student s;
    s.setdata(53,76,"Tejas");
    s.showdata();
    return 0;
}