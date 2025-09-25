#include<iostream>
using namespace std;
#define Pi 3.14
class Shape
{
    public: virtual void cal_area()=0;
            virtual void cal_perimeter()=0;
};
class Rectangle:public Shape
{
    private: int l,b;
    public: Rectangle(int l,int b)
            {
                this->l=l;
                this->b=b;
            }
            void cal_area()
            {
                cout<<"Area of rectangle: "<<l*b<<endl;
            }
            void cal_perimeter()
            {
                cout<<"Perimeter of rectangle: "<<2*(l+b)<<endl;
            }
};
class Circle:public Shape
{
    private:int r;
    public:Circle(int r)
           {
            this->r=r;
           }
           void cal_area()
           {
            cout<<"Area of circle: "<<Pi*r*r<<endl;
           }
           void cal_perimeter()
           {
            cout<<"Perimeter of Circle: "<<2*Pi*r<<endl;
           }
};
int main()
{
    Shape *p=NULL;  //base class pointer which is able to hold child class addrs
    Rectangle r(10,20);
    Circle c(5);
    p=&r;
    p->cal_area();
    p->cal_perimeter();
    p=&c;
    p->cal_area();
    p->cal_perimeter();
    return 0;
}