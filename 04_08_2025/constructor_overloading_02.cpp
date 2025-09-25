/*
Constructor Overloading
Create a Complex number class with:
Default constructor (0 + 0i)
Parameterized constructor
Function to add two complex numbers and display the result.
*/
#include<iostream>
using namespace std;
class Complex
{
    private: int real,img;
    public: Complex()
            {
                real=img=0;
            }
            Complex(int real,int img)
            {
                this->real = real;
                this->img = img;
            }
            Complex Add(Complex &obj)
            {
                Complex temp;
                temp.real = this->real + obj.real;
                temp.img = this->img + obj.img;
                return temp;
            }
            void display()
            {
                cout<<real;
                if(img>=0)
                {
                    cout<<"+";
                }
                cout<<img<<"i"<<endl;
            }
};
int main()
{
    Complex c1;    //default constructor
    c1.display();
    Complex c2(3,5);  //parameterised constructor
    c2.display();
    Complex c3(2,3);
    c3.display();
    Complex c4=c3.Add(c2);
    c4.display();
    return 0;
}