#include<stdio.h>
int main()
{
    int n,bit;
    printf("Enter the value: ");
    scanf("%d",&n);
    printf("Enter the bits: ");
    scanf("%d",&bit);

    printf("%d is << by %d: %d\n",n,bit,n<<bit);
    printf("%d is >> by %d: %d\n",n,bit,n>>bit);
}