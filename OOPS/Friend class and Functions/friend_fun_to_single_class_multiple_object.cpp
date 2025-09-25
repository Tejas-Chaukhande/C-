#include<iostream>
using namespace std;
class Addition
{
    private: int a,b;
    public:Addition(int a,int b)
           {
            this->a=a;
            this->b=b;
           }
           friend int AddNumber(Addition &);   //friend function declaration
};
int AddNumber(Addition &C)     //defination also like normal function
{
    int sum=C.a+C.b;
    return sum;
}
int main()
{
    Addition obj(10,20);
    int sum=AddNumber(obj);    //calling like normal function but passing the object of class
    cout<<"Sum: "<<sum<<endl;
    return 0;
}
