#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element: ");
        scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    printf("Duplicate Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}