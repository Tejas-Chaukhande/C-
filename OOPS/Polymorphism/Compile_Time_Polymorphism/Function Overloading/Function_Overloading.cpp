#include<iostream>
using namespace std;
class Addition
{
    public: 
            void Add(int a,int b)
            {
                cout<<"Sum: "<<a+b<<endl;
            }
            void Add(double a,double b)
            {
                cout<<"Sum: "<<a+b<<endl;
            }
};
int main()
{
    Addition obj;
    obj.Add(5,6);
    obj.Add(2.5,5.4);
}