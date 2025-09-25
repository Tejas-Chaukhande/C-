/*
Static member function:-
To call static member function there is no need of object they are called dirrectly using "class_name::static_mem_fun(args)"
Syntax:
            class_name::static_member_functions(args.list)
Note:- 
      All the "data members" should be static in the "static member function" because simple data member not allowed.
      Static member functions are used to perform operations on static data members.

      Key Points:
Static functions belong to the class, not to objects.
They can only access static data members or other static methods.
No this pointer is available inside static functions.
*/
#include<iostream>
using namespace std;
class Item
{
    private:static int x;
            static int y;
    public: static void getdata(int, int);
            static void display();
};
void Item::getdata(int p,int q)
{
    x = p;
    y = q;
}
void Item::display()
{
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
}
int Item::x;
int Item::y;
int main()
{
    Item::getdata(10,20);  //static member function belong to class not to object
    Item::display();
    return 0;
}