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
void sort(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<=n-1;j++)
    {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
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
    sort(arr,n);
    print(arr,n);
}