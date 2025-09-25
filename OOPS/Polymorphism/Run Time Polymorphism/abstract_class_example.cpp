#include<iostream>
using namespace std;
class Shape
{
    protected: int length, breath;
    public: Shape(int len,int bre)
            {
                cout<<"In shape constructor...!\n";
                length=len;
                breath=bre;
            }
            virtual void display_area()=0; //pure virtual function
};
class Rectangle:public Shape
{
    public:Rectangle(int l,int b):Shape(l,b)
           {
            cout<<"In Rectangle constructor...!\n";
           }
           void display_area()
           {
            cout<<"Area of rectagnle: "<<length*breath<<endl;
           }
};
class Triangle:public Shape
{
    public:Triangle(int l,int b):Shape(l,b)
           {
            cout<<"In Triangle constructor...!\n";
           }
           void display_area()
           {
            cout<<"Area of rectagnle: "<<0.5*length*breath<<endl;
           }
};
int main()
{
    Shape *ptr=NULL;
    Rectangle r(3,6);
    ptr=&r;
    ptr->display_area();
    Triangle t(5,6);
    ptr=&t;
    ptr->display_area();
    return 0;

}