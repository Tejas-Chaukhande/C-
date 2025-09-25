#include<iostream>
using namespace std;
class Complex
{
    private: int real,img;
    public: Complex(int r, int i)
            {
                real = r;
                img = i;
            }
            Complex()
            {
                real=img=0;
            }
            void display()
            {
                cout<<"Complex no: "<<real;
                if(img>0)
                {
                    cout<<"+";
                }
                cout<<img<<"i"<<endl;
            }
            Complex operator +(Complex &obj)
            {
                Complex temp;
                temp.real = this->real + obj.real;
                temp.img = this->img + obj.img;
                return temp;
            }
            Complex operator -(Complex &obj);
            friend Complex operator*(Complex &obj1,Complex &obj2);

};
Complex operator*(Complex &obj1,Complex &obj2)    //operator overloading using friend function.
{
    Complex temp;
    temp.real = obj1.real * obj2.real;
    temp.img = obj1.img * obj2.img;
    return temp;
}
Complex Complex::operator-(Complex &obj)
{
    Complex temp;
    temp.real = this->real - obj.real;
    temp.img = this->img - obj.img;
    return temp;
}
int main()
{
    Complex obj1(2,3);
    Complex obj2(5,-7);
    Complex obj3=obj1+obj2;
    Complex obj4=obj2-obj1;
    Complex obj5=obj1*obj2;
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
    obj5.display();
    return 0;
}