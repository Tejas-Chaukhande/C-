/*Function overriding: Multiple function having same name , same signature but different implementation.
Virtual function: THe member function of parent class should be resolved by the member function of child class,with different implementation that process called "Function overriding"*/

#include<iostream>
using namespace std;
class Test1
{
    public: int x;
            Test1(int x)
            {
                this->x=x;
            }
            virtual void display()
            {
                cout<<"x="<<x<<endl;
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
                cout<<"x="<<x<<" "<<"y="<<y<<endl;
            }
};
int main()
{
    Test1 t1(10);
    
    Test2 t2(20,30);
    Test1 *ptr;
    ptr=&t1;
    ptr->display();
    ptr=&t2;
    ptr->display();
    return 0;

}