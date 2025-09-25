#include<iostream>
using namespace std;
class Height
{
    private: int feet,inch;
    public: 
           friend ostream& operator <<(ostream &output, Height &obj);
           friend istream& operator >>(istream &input, Height &obj);
           friend Height operator+(Height &obj1,Height &obj2);

};
Height operator+(Height &obj1, Height &obj2)
{
    Height temp;
    temp.feet=obj1.feet+obj2.feet;
    temp.inch=obj1.inch+obj2.inch;
    if(temp.inch >= 12)
    {
        temp.inch-=12;
        temp.feet++;
    }
    return temp;
}
ostream& operator<<(ostream &output, Height &obj)
{
    output<<obj.feet<<":"<<obj.inch;
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
    cout<<"Enter height1: ";
    cin>>h1;
    cout<<"Enter height2: ";
    cin>>h2;
    h3=h1+h2;
    cout<<"addition is: ";
    cout<<h3;
}