/*
A generic pointer can hold the address of any data type, but while dereferencing (*), generic pointer must be 
"typecasted". Because compiler don't know how many bytes fetch from memory. (so, it will give compiler time error.)
*/
#include<iostream>
using namespace std;
int main()
{
    int a = 65;
    void *ptr = &a;      //generic / void pointer
    cout<<*(int*)ptr<<endl;   //Typecasted while dereferencing
    return 0;
}