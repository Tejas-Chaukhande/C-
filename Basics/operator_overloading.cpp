#include<iostream>
using namespace std;
class Complex
{
    private: int real,img;
    public:
          void getdata();
          void showdata();
          Complex operator +(Complex &);
          Complex operator -(Complex &);
          Complex &operator =(Complex &);
};
Complex &Complex::operator =(Complex &C)
{
    this->real=C.real;
    this->img=C.img;
    return *this;

}
Complex Complex::operator +(Complex &C)
{
    Complex temp;
    temp.real=this->real+C.real;
    temp.img=this->img+C.img;

    return temp;
}
Complex Complex::operator -(Complex &C)
{
    Complex temp;
    temp.real=this->real-C.real;
    temp.img=this->img-C.img;
    return temp;
}
void Complex::getdata()
{
    cout<<"Enter the real part: ";
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
    Complex c1,c2,c3,c4;
    c1.getdata();
    c2.getdata();
    c1.showdata();
    c2.showdata();

    // c3=c1+c2;
    // c3.showdata();
    // c4=c2-c1;
    // c4.showdata();

    c2=c1;
    c1.showdata();
    c2.showdata();

    return 0;
}