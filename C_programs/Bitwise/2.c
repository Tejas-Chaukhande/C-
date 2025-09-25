#include<stdio.h>
int main()
{
    int data,bit;
    printf("Enter the date: ");
    scanf("%d",&data);
    printf("Enter the bit: ");
    scanf("%d",&bit);

    printf("%d is ^ by %d: %d\n",data,bit,data^bit);
}