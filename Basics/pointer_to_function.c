#include<stdio.h>
int add(int,int);
int mul(int,int);
int main()
{
    int a,b,s,m;
    printf("Enter 2 values: ");
    scanf("%d%d",&a,&b);

    int (*ptr)(int,int)=add;   //function name represent the address of function
    s=ptr(a,b);

    printf("Sum: %d\n",s);

    ptr=mul;    //pointer holding the address of mul function
    m=ptr(a,b);

    printf("Mul: %d\n",m);
}
int add(int x,int y)
{
    return x+y;
}
int mul(int x,int y)
{
    return x*y;
}