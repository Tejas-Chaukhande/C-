#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    while(n)
    {
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("Sum of Digits: %d",sum);
}