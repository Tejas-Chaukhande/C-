#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int *ptr=&num;   //pointer holding the address of num

    int *&ref=ptr;   //reference that holding pointing to the ptr address

    cout<<"Address of ref: "<<ref<<endl;
    cout<<"Address of ptr: "<<ptr<<endl;

    cout<<"Value at ref: "<<*ref<<endl;
    cout<<"Value at ptr: "<<*ptr<<endl;


}