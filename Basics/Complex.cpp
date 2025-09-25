#include<iostream>
using namespace std;
class Complex
{
    private:int real,img;
    public: Complex();      //default constructor
            Complex(int,int); //parameterised constructor
            Complex(Complex &); //Copy constructor
            Complex operator +(Complex &);  //+ operator overloading
            void Print();
            ~Complex();
};
Complex Complex::operator +(Complex &C)
{
    Complex temp;
    temp.real=this->real+C.real;
    temp.img=this->img+C.img;
    return temp;
}
Complex::Complex(Complex &C)
{
    cout<<"Parameterised constructor...!\n";
    this->real=C.real;
    this->img=C.img;
}
Complex::~Complex()
{
    cout<<"In Complex destructor...!\n";
}
Complex::Complex()
{
    cout<<"In default constructor...!\n";
    real=img=0;
}
Complex::Complex(int real,int img)
{
    this->real=real;
    this->img=img;
}
void Complex::Print()
{
    cout<<real;
    if(img>=0)
        cout<<"+";
    cout<<img<<"i"<<endl;
}
int main()
{
    Complex obj1; //Default constructor
    //obj1.Print();

    Complex obj2(3,5);  //Parameterised constructor
    obj2.Print();

    Complex obj3(5,7);
    obj3.Print();

    obj1=obj2+obj3;         //+ operator overloading (obj2 is calling object)
    cout<<"Addition: \n";
    obj1.Print();

    // Complex obj3(obj2);   //Copy constructor
    // obj3.Print();


}