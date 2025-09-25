/*Sum of Prime numbers*/
#include<stdio.h>
int is_prime(int x)
{
    int cnt=0;
    if(x<2)
    {
        return 0;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("ENter the max range: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(is_prime(i))
        {
            sum=sum+i;
        }
    }
    printf("Sum of Prime numbers: %d",sum);
}
