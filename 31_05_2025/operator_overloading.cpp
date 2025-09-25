#include<iostream>
using namespace std;
class Complex
{
    private: int real,img;
    public:
           friend ostream& operator<<(ostream& output,Complex &);
           friend istream& operator>>(istream& input,Complex &);
           friend Complex operator+(Complex &, Complex &);
           Complex operator-(Complex &);
};
Complex Complex::operator-(Complex &obj)
{
    Complex temp;
    temp.real=this->real-obj.real;
    temp.img=this->img-obj.img;
    return temp;
}
ostream& operator<<(ostream& output,Complex &obj)
{
    output<<obj.real;
    if(obj.img>=0)
    {
        cout<<"+";
    }
    cout<<obj.img<<"i";
    return output;
}
istream& operator>>(istream& input,Complex &obj)
{
    input>>obj.real>>obj.img;
    return input;
}
Complex operator+(Complex &obj1, Complex &obj2)
{
    Complex temp;
    temp.real=obj1.real+obj2.real;
    temp.img=obj1.img+obj2.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4;
    cout<<"Enter value real and img for c1: ";
    cin>>c1;
    cout<<"Enter value real and img for c2: ";
    cin>>c2;
    cout<<"Addition of Two objects: ";
    c3=c1+c2;
    cout<<c3;
    cout<<endl;
    cout<<"Substaction of 2 objects: ";
    c4=c2-c1;
    cout<<c4;
    cout<<endl;
    return 0;
}