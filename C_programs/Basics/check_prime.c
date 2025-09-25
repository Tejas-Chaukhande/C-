#include<stdio.h>
int check_prime(int x)
{
    int cnt=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter the no. to check prime: ");
    scanf("%d",&n);
    int x=check_prime(n);
    if(x==1)
    {
        printf("Its Prime no.");
    }
    else
    {
        printf("Its not Prime no.");
    }
}
