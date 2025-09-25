#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max,sec_max;
    if(arr[0]>arr[1])
    {
        max=arr[0];
        sec_max=arr[1];
    }
    else{
        max=arr[1];
        sec_max=arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>max)
        {
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]>sec_max && arr[i]!=max)
        {
            sec_max=max;
        }
    }
printf("max: %d\n",max);
printf("sec_max: %d",sec_max);

}