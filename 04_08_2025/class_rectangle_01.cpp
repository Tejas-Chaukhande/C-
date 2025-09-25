/*
Class & Object Creation
Create a Rectangle class with length and breadth as private members. Add functions to:
Set dimensions
Calculate area and perimeter
Print dimensions
Use objects to demonstrate.
*/
#include<iostream>
using namespace std;
class Rectangle
{
    private: int length;
             int breadth;
    public: void set_dimensions(int l,int b)
            {
                length = l;
                breadth = b;
            }
            int cal_area()
            {
                return length*breadth;
            }
            int cal_perimeter()
            {
                return 2*(length + breadth);
            }
};
int main()
{
    Rectangle r;
    r.set_dimensions(10,20);
    cout<<"Area of rectangle is: "<<r.cal_area()<<endl;
    cout<<"Perimeter of rectangle is: "<<r.cal_perimeter()<<endl;
    return 0;
}