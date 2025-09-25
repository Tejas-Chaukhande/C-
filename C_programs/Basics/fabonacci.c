#include<stdio.h>
int main()
{
    int a=0,b=1,next=0,n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=2;next<n;i++)
    {
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
}