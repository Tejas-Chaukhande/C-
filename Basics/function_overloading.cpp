#include<iostream>
using namespace std;
int Add(int a,int b)
{
    return a+b;
}
float Add(float a,float b)
{
    return a+b;
}
int Add(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    cout<<Add(10,20)<<endl;
    cout<<Add(4.5f,7.7f)<<endl;
    cout<<Add(10,20,30)<<endl;
}