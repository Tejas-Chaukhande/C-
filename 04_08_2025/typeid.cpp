#include<iostream>
using namespace std;
int main()
{
    char ch;
    int i;
    float f;
    cout<<typeid(ch).name()<<endl;
    cout<<typeid(i).name()<<endl;
    cout<<typeid(f).name()<<endl;
    return 0;
}