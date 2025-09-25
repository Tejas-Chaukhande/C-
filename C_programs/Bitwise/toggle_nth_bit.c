#include<stdio.h>
int main()
{
    int data,bit;
    printf("Enter the data: ");
    scanf("%d",&data);
    printf("Enter the bit: ");
    scanf("%d",&bit);

    printf("Data before: %d\n",data);
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(data>>i)&1);
    }

    data=data^(1<<bit);    //Main Logic

    printf("\nData after: %d\n",data);
    for(int i=7;i>=0;i--)
    {
        printf("%d ",(data>>i)&1);
    }

}