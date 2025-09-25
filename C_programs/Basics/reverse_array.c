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
void reverse(int arr[],int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    print(arr,n);
    reverse(arr,n);
    print(arr,n);
}