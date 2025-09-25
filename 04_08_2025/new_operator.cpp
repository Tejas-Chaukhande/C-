#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int;    //4 bytes of memory will be allocated, dynamically
    *ptr = 10;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    delete ptr;            //
    return 0;
}