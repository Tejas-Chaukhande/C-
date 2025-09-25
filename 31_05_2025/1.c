#include<stdio.h>
void increase()
{
    static int n=1;    //storage class is bydefault auto, stores in the stack.
    printf("%d ",++n);
}
int main()
{
    increase();
    increase();
    increase();
    increase();
    increase();
}