#include<stdio.h>
int main()
{
    int data,bit;
    printf("Etner the date: ");
    scanf("%d",&data);
    printf("Enter the bit: ");
    scanf("%d",&bit);
    if(!(bit>=0 && bit<32))
    {
        printf("Invalid Bit position...!");
        return 0;
    }
    if(((data>>bit)&1)==1)
    {
        printf("%dth bit is SET in %d\n",bit,data);
    }
    else
    {
        printf("%dth bit is CLEAR in %d\n",bit,data);
    }
    for(int bit=31;bit>=0;bit--)
    {
        printf("%d",(data>>bit)&1);
    }
}