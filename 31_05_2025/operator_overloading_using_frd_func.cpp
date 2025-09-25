#include<iostream>
using namespace std;
class Temp
{
    private:int x,y;
    public:Temp(int x,int y)
           {
            this->x=x;
            this->y=y;
           } 
           Temp()
           {
            x=y=0;
           }
           void display()
           {
            cout<<x<<" "<<y<<endl;
           }
           friend Temp operator+(Temp &obj1,Temp &obj2);  //operator overloading using friend function
};
Temp operator+(Temp &obj1,Temp &obj2)
{
    Temp temp;
    temp.x=obj1.x+obj2.x;
    temp.y=obj1.y+obj2.y;
    return temp;
}
int main()
{
    Temp t1(10,20);
    t1.display();
    Temp t2(10,20);
    t2.display();

    Temp t3=t1+t2;
    t3.display();
    return 0;
}