#include<stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("ENTER the NUMBER TO check Pallindrome: ");
    scanf("%d",&n);
    int x=n;

    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(x==rev)
    {
        printf("Number is pallindrome...!");
    }
    else{
        printf("No. is Not Pallindrome...!");
    }
}