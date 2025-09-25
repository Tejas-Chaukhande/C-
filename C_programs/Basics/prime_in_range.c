#include<stdio.h>
void prime_in_range(int min,int max)
{
    for(int i=min;i<=max;i++)
    {
        int cnt=0;
        for(int j=i;i<=min;j++)
        {
            if(i%j==0)
            {
                cnt++;
            }
        }
        if(cnt==2)
        {
            printf("%d",i);
        }
    }

}
int main()
{
    int min,max;
    printf("Enter the range to print prime: ");
    scanf("%d %d",&min,&max);
    prime_in_range(min,max);
}