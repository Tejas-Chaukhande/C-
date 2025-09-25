#include<iostream>
using namespace std;
class Shape
{
    protected: int length, bredth;
    public: Shape(int l,int b)
            {
                cout<<"In shape Constructor...!"<<endl;
                length = l;
                bredth = b;
            }
            virtual void calculate_area()=0;
};
class Rectangle:public Shape
{
    public: Rectangle(int l,int b):Shape(l,b)
            {
                cout<<"In Rectangle Constructor...!"<<endl;
            }
            void calculate_area()
            {
                cout<<"Area of Rectangle: "<<length*bredth<<endl;
            }
};
class Triangle:public Shape
{
    public: Triangle(int l,int b):Shape(l,b)
            {
                cout<<"In Triangle COnstructor...!"<<endl;
            }
            void calculate_area()
            {
                cout<<"Area of triangle: "<<0.5*length*bredth<<endl;
            }
};
int main()
{
    Shape *ptr= NULL;
    Triangle t(10,20);
    Rectangle r(10,20);
    ptr=&t;
    ptr->calculate_area();
    ptr=&r;
    ptr->calculate_area();
    return 0;
}