#include<iostream>
using namespace std;
class Item
{
    private: static int x; //for static data members only once memory allocated, same memory used by all objects.
             static int y;
    public: void getdata(int,int);
            void display();
};
void Item::getdata(int x,int y)
{
    this->x =x;
    this->y = y;
}
void Item::display()
{
    this->x++,this->y++;
    cout<<"x="<<x<<" "<<"y="<<y<<endl;
}
int Item::x;      //when we use static data members there is need to define it outside the class.
int Item::y;
int main()
{
    Item obj1,obj2,obj3;
    obj1.getdata(10,20);
    obj2.getdata(30,40);
    obj3.getdata(50,60);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}