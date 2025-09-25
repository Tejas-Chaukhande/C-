#include<stdio.h>
void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void print_unique_elememts(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            printf("%d ",arr[i]);
        }
    }
}
void main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    print(arr,n);
    print_unique_elememts(arr,n);
}