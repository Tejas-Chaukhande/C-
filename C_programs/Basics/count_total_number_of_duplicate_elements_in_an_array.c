#include<stdio.h>
void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element: ");
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
int count_duplicate_element(int arr[], int n)
{
    int cnt=0;
    char flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1] && flag==1)
        {
            cnt++;
            flag=0;
        }
        else if(arr[i]!=arr[i+1] )
        {
            flag=1;
        }
    }
    return cnt;
}
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
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
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    print(arr,n);
    sort(arr,n);
    print(arr,n);
    int x=count_duplicate_element(arr,n);
    printf("Total no. of Duplicate Elements: %d",x);
}