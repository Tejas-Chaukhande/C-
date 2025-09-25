#include<iostream>
using namespace std;
class Test
{
    private:int data;
    public: Test()
            {
                data=0;
            }
            Test(int data)
            {
                this->data=data;
            }
            void operator=(Test &C)
            {
                this->data=C.data;
            }
            void display()
            {
                cout<<data<<endl;
            }
};
int main()
{
    Test t1(20);
    t1.display();
    Test t2(10);
    t2.display();
    Test t3;
    t3=t2;   //t3.operator=(t2)  ; t2 assisning to t3
    t3.display();
}