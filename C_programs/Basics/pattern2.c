#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    int sp=n-1,st=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=sp;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=st;k++)
        {
            printf("* ");
        }
        sp--,st++;
        printf("\n");
    }
    sp=1,st=n-1;

    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=sp;j++)
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

}