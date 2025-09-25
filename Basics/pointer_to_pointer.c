#include<stdio.h>
void swap1(int **p1,int **p2)
{
    int temp;
    temp=**p1;
    **p1=**p2;
    **p2=temp;
}
void swap(int *ptr1,int *ptr2)
{
    swap1(&ptr1,&ptr2);
}
int main()
{
    int a,b;
    printf("Enter the values for a and b: ");
    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("a=%d b=%d",a,b);
    return 0;
}