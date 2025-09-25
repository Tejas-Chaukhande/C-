#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    char ch;
    int i;
    float f;
    bool b;
    double d;

    cout<<typeid(ch).name()<<endl;
    cout<<typeid(i).name()<<endl;
    cout<<typeid(f).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(d).name()<<endl;
    return 0;
}