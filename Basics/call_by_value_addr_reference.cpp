#include<iostream>
using namespace std;
void swap_val(int a, int b)     //call by value
{
    int c=a;
    a=b;
    b=c;
}
void swap_addr(int *a, int *b)   //call by address
{
    int c=*a;
    *a=*b;
    *b=c;
}
void swap_ref(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int a=10,b=20;
    cout<<"Before swap: "<<a<<" "<<b<<endl;
    swap_val(a,b);        //Call by value
    cout<<"After call by value: "<<a<<" "<<b<<endl;
    swap_addr(&a,&b);      //call by address
    cout<<"After call by addre:"<<a<<" "<<b<<endl;
    a=40,b=50;
    swap_ref(a,b);        //call by reference
    cout<<"After call by reference: "<<a<<" "<<b<<endl;
    return 0;
}