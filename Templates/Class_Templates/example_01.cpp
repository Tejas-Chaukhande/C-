#include<iostream>
using namespace std;
template <class T>

class Addition
{
    private: T a,b;
    public: Addition(T a1, T b1)
            {
                a=a1;
                b=b1;
            }
            T addNo()
            {
                return a+b;
            }
};
int main()
{
    Addition <int> obj1(10,20);
    int i=obj1.addNo();
    cout<<"Addition of Integer: "<<i<<endl;
    
    Addition <float> obj2(4.5,6.2);
    float f=obj2.addNo();
    cout<<"Addition of float: "<<f<<endl;

    Addition <string> obj3("Tejas","Chaukhande");
    string str=obj3.addNo();
    cout<<"Concatenation of string: "<<str<<endl;
    
    return 0;
}