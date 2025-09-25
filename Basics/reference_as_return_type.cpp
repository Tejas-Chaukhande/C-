#include<iostream>
using namespace std;
int &Add(int &a,int &b)
{
    // int z=0;
    // int &ref=z;
    // z=a+b;
    // return ref;

    static int z;
    z=a+b;
    return z;
}
int main()
{
    int a=10,b=20,c;
    c=Add(a,b);      //call by reference
    cout<<"Sum :"<<c<<endl;
    return 0;
}