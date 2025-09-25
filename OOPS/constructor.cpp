/*Constructor is special member function of class, which initialised the objects at the time of creation.
Constructor invoked when we create the object.
Constructor invoked only once in life time of an object, when it created.
Constructor having same name as class.
Constructor does not have any return type.
Constructor alway public function to the class, beacuse object can be created in member and non member function.*/

#include<iostream>
using namespace std;
class Complex
{
    private: int real,img;
    public: Complex()
            {
                cout<<"In default Constructor....!\n";
            }
            Complex(int real,int img)
            {
                cout<<"In parameterised Constructor....!\n";
                this->real=real;
                this->img=img;
            }
            Complex(Complex &C)
            {
                cout<<"In copy constructor...!\n";
                real=C.real;
                img=C.img;
            }
            void getdata();
            void showdata();
};
void Complex::getdata()
{
    cout<<"ENter the real part: ";
    cin>>real;
    cout<<"Enter the img part: ";
    cin>>img;
}
void Complex::showdata()
{
    cout<<real;
    if(img>=0)
    {
        cout<<"+";
    }
    cout<<img<<"i"<<endl;
}
int main()
{
    Complex m1;   //default constructor
    m1.getdata();
    m1.showdata();
    Complex m2(3,5); //Parameterised constructor
    m2.showdata();

    //Complex m3(m2);   //default copy constructor
    Complex m3=m1;
    m3.showdata();
}