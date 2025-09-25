#include<iostream>
using namespace std;
class Height
{
    private: int feet,inch;
    public:
            friend istream& operator >> (istream &input,Height &h);  //normal function not member function of class
            friend ostream& operator << (ostream &output,Height &h);//no calling and this pointer here
            //Height operator +(Height &h);      //operator overloading using member function of class
            friend Height operator+(Height &,Height &);
};
Height operator+(Height &h1, Height &h2)
{
    Height temp;
    temp.feet=h1.feet+h2.feet;
    temp.inch=h1.inch + h2.inch;
    if(temp.inch>=12)
    {
        temp.inch-=12;
        temp.feet++;
    }
    return temp;
}
istream& operator>>(istream &input,Height &h)
{
    input>>h.feet>>h.inch;
    return input;
}
ostream& operator<<(ostream &output,Height &h)
{
    output<<h.feet<<"."<<h.inch<<endl;
    return output;
}
int main()
{
    Height h1,h2,h3;
    cout<<"Enter Height1: ";
    cin>>h1;
    cout<<"Enter Height2: ";
    cin>>h2;
    cout<<"Addition is: ";
    h3=h1+h2;
    cout<<h3;

}