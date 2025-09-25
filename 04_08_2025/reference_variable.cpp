#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &ref = a;
    cout<<"a="<<a<<"    ";
    cout<<"Addr of a: "<<&a<<endl;
    cout<<"ref= "<<ref<<"   ";
    cout<<"Addr of ref: "<<&ref<<endl;
    return 0;
}