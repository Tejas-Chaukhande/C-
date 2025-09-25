/*
wild pointer:- "Uninitialised pointers" aer know as "wild pointer".
The pointers they point to some "invalid Memory Location".
Uninialised pointers can causes "unpredictable behaviour" and lead to "program crashes".

To avoid wild pointer errors, it is important to always initialize pointers to valid memory location or "NULL".
*/
#include<iostream>
using namespace std;
int main()
{
    int *ptr;    //Uninitialised / wild pointer
    *ptr = 10;    //assigned some value to pointer
   cout<<"Value :"<<*ptr;         //o/p: Unpredictable
    return 0;
}