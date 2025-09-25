#include<stdio.h>
int print_n(int n)
{
    if(n==0)
    {
        return 0;
    }
    printf(" %d ",n);
    print_n(--n);

}
int main()
{
    int n;
    printf("ENter the num: ");
    scanf("%d",&n);
    int x=print_n(n);
}