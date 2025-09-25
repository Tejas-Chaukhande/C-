#include<stdio.h>
int main()
{
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);

    int cnt=0;
    for(int bit=31;bit>=0;bit--)
    {
        if((((data>>bit)&1)==1) && ((data>>bit-1)&1==1))
        {
            bit--;
            cnt++;
        }
    }
    printf("Set bit pair: %d",cnt);
    return 0;
}