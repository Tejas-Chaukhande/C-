/* Operator overloading: it is the example of Function overriding, It improvise the functionality of the existing operator so we can use that operator on object.*/
#include<iostream>
using namespace std;
class Height
{
    private: int feet,inch;
    public:Height()
           {
            feet=inch=0;
           }
           Height(int f,int i)
           {
                feet=f;
                inch=i;
           }
           void display()
           {
              cout<<"Height: "<<feet<<"."<<inch<<endl;
           }
        //    friend Height operator +(Height &h1, Height &h2)
        //    {
        //       Height h3;
        //       h3.feet=h1.feet+h2.feet;
        //       h3.inch=h1.inch+h2.inch;
        //       if(h3.inch>12)
        //       {
        //         h3.inch-=12;
        //         h3.feet++;
        //       }
        //       return h3;
        //    }
        Height operator+(Height &h2)
        {
            Height h3;
            h3.feet=this->feet+h2.feet;
            h3.inch=this->inch+h2.inch;
            if(h3.inch > 12)
            {
                h3.inch-=12;
                h3.feet++;
            }
            return h3;
        }
        friend ostream& operator<<(ostream &output, Height &obj)
        {
            output<<obj.feet<<"."<<obj.inch<<endl;
            return output;
        }
        friend istream& operator>>(istream &input, Height &obj)
        {
            input>>obj.feet>>obj.inch;
            return input;
        }
};
int main()
{
    Height h1,h2,h3;
    cout<<"Enter the Height1: ";
    cin>>h1;
    cout<<"Enter the Height2: ";
    cin>>h2;
    h3=h1+h2;
    cout<<h1;
    cout<<h2;
    cout<<"Height sum: "<<h3;
    return 0;
}