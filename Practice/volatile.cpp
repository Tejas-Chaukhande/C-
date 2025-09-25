#include<iostream>
using namespace std;
int main()
{
    volatile int a=10;
    printf("%d %d %d %d\n",++a,a++,a++,++a);
}