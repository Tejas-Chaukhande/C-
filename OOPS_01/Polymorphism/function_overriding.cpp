/*Function overriding:- It is the example of the run time polymorphism, function defination resolved at run time.
The member function of the parent class redefined by the child class, with same name same signature
but different implementation.
*/
#include<iostream>
using namespace std;
class Test1
{
    protected: int x;
    public: Test1(int x)
            {
                this->x = x;
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
                this->y = y;
            }
            void display()
            {
                cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
            }
};
int main()
{
    Test1 *ptr;
    Test1 t1(10);
    Test2 t2(10,20);
    ptr =&t1;
    ptr->display();
    ptr=&t2;
    ptr->display();
    return 0;
}