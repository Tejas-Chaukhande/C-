/*
Steps to achieve run time polymorphism:
1.Function overriding
2.Base class pointer (Holds the address of child class, do data binding)
3.Virtual function 
*/

//Example of step 2
#include<iostream>
using namespace std;
class Test1
{
    protected:int x;
    public:
    Test1(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<"x: "<<x<<endl;
    }
};
class Test2:public Test1            //inherit the feature of Test1 in Test2, as public
{
    private:int y;
    public:
    Test2(int x,int y):Test1(x)
    {
        this->y=y;
    }
    void display()               //function overrided
    {
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }

};
int main()
{
    Test1 t1(10);
    Test2 t2(20,30);

    Test1 *ptr;    //  Base class pointer which holds the address of child classes.
    ptr=&t1;       //ptr holding the address of child class by using object t1.
    ptr->display();//always calls to base class display

    ptr=&t2;
    ptr->display();//always calls to base class display

/*Here the pointer is of base class , so always it calls to base display(), to overcome that use virtual function.
  Using Base pointer, data binding done. use virtual function for function binding*/
    return 0;
}