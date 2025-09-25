#include<iostream>
using namespace std;
class Height
{
    private:int feet,inch;
    public:Height(int feet,int inch)
           {
            this->feet=feet;
            this->inch=inch;
           }
           Height()
           {
            feet=inch=0;
           }
           
           void display()
           {
            cout<<"Feet: "<<feet<<endl;
            cout<<"Inch: "<<inch<<endl;
           }
           friend Height Addition(Height &,Height &);  //friend function, so we can access the private members of Height class
};
Height Addition(Height &h1, Height &h2)   
{
    Height temp;
    temp.feet=h1.feet+h2.feet;
    temp.inch=h1.inch+h2.inch;

    if(temp.inch>=12)
    {
        temp.inch=temp.inch-12;
        temp.feet++;
    }
    return temp;
}
int main()
{
    Height h1(2,8);
    Height h2(5,6);
    Height h3;
    h3=Addition(h1,h2);  //Normal calling hence its friend function
    h3.display();
    return 0;
}