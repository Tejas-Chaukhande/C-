/*Function overriding:- Member function of the parent class supposed to be redefined by the member function of the
child class with same name, same signatur*/
#include<iostream>
using namespace std;
class Test1
{
    protected: int x;
    public: Test1(int x)
            {
                this->x=x;
            }
            virtual void display()
            {
                cout<<"x: "<<x<<endl;
            }
};
class Test2:public Test1
{
    private: int y;
    public: Test2(int x,int y):Test1(x)
            {
                this->y=y;
            }
            void display()
            {
                cout<<"x: "<<x<<" "<<"y: "<<y<<endl; //function overridded
            }
};
int main()
{
    Test1 *ptr;  //always calls to the base class member function

    Test1 t1(6);
    ptr=&t1;
    ptr->display();

    Test2 t2(5,8);
    ptr=&t2;
    ptr->display();
}