#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    int sp=0,st=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<sp;j++)
        {
            printf(" ");
        }
        for(int k=st;k>=1;k--)
        {
            printf("* ");
        }
        sp++,st--;
        printf("\n");
    }
    sp=n-2,st=2;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=sp;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=st;k>=1;k--)
        {
            printf("* ");
        }
        sp--,st++;
        printf("\n");
    }
    
}