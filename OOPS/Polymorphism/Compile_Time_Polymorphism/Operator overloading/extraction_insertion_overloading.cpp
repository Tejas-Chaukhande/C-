#include<iostream>
using namespace std;
class Height
{
    private: int feet,inch;
    public:
           friend ostream& operator <<(ostream& output,Height &obj);
           friend istream& operator >>(istream& input,Height &obj);
           friend Height operator +(Height &,Height &);
};
Height operator+(Height &obj1,Height &obj2)
{
    Height temp;
    temp.inch=obj1.inch+obj2.inch;
    temp.feet=obj1.feet+obj2.feet;
    if(temp.inch >= 12)
    {
        temp.inch-=12;
        temp.feet++;
    }
    return temp;
}
ostream& operator<<(ostream &output,Height &obj)
{
    output<<obj.feet<<"."<<obj.inch<<endl;
    return output;
}
istream& operator>>(istream &input, Height &obj)
{
    input>>obj.feet>>obj.inch;
    return input;
}
int main()
{
    Height h1,h2,h3;
    cout<<"Enter Height 1: ";
    cin>>h1;
    cout<<"Enter Height 2: ";
    cin>>h2;
    cout<<"Addtion of Height: ";
    h3=h1+h2;
    cout<<h3;
    return 0;
}