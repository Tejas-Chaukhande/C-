#include<stdio.h>
int main()
{
    int data,bit;
    printf("Enter the data: ");
    scanf("%d",&data);
    int set=0,clear=0;
    for(int bit=31;bit>=0;bit--)
    {
        if(((data>>bit)&1)==1)
        {
            set++;
        }
        else{
            clear++;
        }
        printf("%d ",(data>>bit)&1);
    }
    printf("\nSET bit: %d\nCLEAR bit: %d\n",set,clear);
    return 0;
}