/*Function Overriding: 
It is the example Run time polymorphism, where function defination resolve at run time.

Member function of Parent class redefining in the Child class with same name and signature
but different implementation.

Steps to achieve run time polymorphism:
1.Function overriding
2.Base class pointer
3.Virtual function 

*/

//Example of Step 1
#include<iostream>
using namespace std;
class Test1
{
    protected:int x;
    public:Test1(int x)
           {
            this->x=x;
           }
           void display()
           {
            cout<<"x: "<<x<<endl;
           }
};
class Test2:public Test1
{
    private: int y;
    public:
            Test2(int x,int y):Test1(x)
            {
                this->y=y;
            }
            void display()                       //function overrided in child class (Step1)
            {
                cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
            }
};
int main()
{
    Test2 T2(3,5);        //created child class object
    T2.display();        //always call to the overrided function

    Test1 T1(9);         //created base class object
    T1.display();       //call to the base class display
 
    // cout<<"Calling the display function of Base class, with data of object child class: "<<endl;
    T2.Test1::display();   //It will call to the parent class display having data of T2.
}