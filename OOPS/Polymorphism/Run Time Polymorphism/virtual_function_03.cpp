/*
Steps to achieve run time polymorphism:
1.Function overriding
2.Base class pointer
3.Virtual function 
*/

//Example of step 3
#include<iostream>
using namespace std;
class Test1
{
    protected: int x;
    public: Test1(int x)
            {
                this->x=x;
            }
            virtual void display()   //function binding done here
            {
                cout<<"x: "<<x<<endl;
            }
};
class Test2:public Test1
{
    private:int y;
    public: Test2(int x,int y):Test1(x)
            {
                this->y=y;
            }
            void display()      //function ovrrided (same name,same signature but different implementation)
            {
                cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
            }
};
int main()
{
    Test1 t1(10);
    Test2 t2(20,30);

    Test1 *ptr=&t1;   //data binding done here
    ptr->display();

    ptr=&t2;
    ptr->display();

    return 0;
}