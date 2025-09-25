#include<stdio.h>
int check_all_set(int n)
{
    if((n&(n+1))==0)
    {
        return 1;
    }
    return 0;
}
int check_alternate_bit(int num)
{
    int n;
    n=num^(num>>1);
    return check_all_set(n);
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    int x=check_alternate_bit(num);
    if(x==1)
    {
        printf("All the bits in number, set in Alternate pattern");
    }
    else{
        printf("All the bits in number, set in random pattern");
    }
}

/* Explaination:
    n=10------>   1010
    n>>1------>   0101
                 -------
    x=n^(n>>1)--> 1111    (if all bits are 1 then bits are in alternate pattern.)

    (x&(x+1)==0) ------> To check all bits are 1;

    num=n^(n>>1)---> 1111
    
    num&(num+1)----> num  =  1111
                     num+1= 10000    &
                           --------
                            00000
    */