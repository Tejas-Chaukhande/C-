#include <stdio.h>
#include<iostream>
using namespace std;

void check_stack_direction()
{
    int var1;               //all local variables stored in the Stack
    int var2;

    cout<<"&var1: "<<&var1<<endl;
    cout<<"&var2: "<<&var2<<endl;

    if (&var2 > &var1)    // here &var1 is greataer the &var2
        printf("Stack is growing upward.\n");
    else
        printf("Stack is growing downward.\n");
}

int main()
{
    check_stack_direction();
    return 0;
}
