#include<stdio.h>
int main()
{
    int min,max;
    printf("Enter the range: ");
    scanf("%d %d",&min,&max);

    for(int i=min;i<=max;i++)
    {
        printf("%d-------->%c------>",i,i);
        for(int bit=15;bit>=0;bit--)
        {
            printf("%d",(i>>bit)&1);

        }
        printf("\n");
    }
}