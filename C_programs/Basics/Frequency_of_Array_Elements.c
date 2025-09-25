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
void frequency_of_array_elements(int arr[],int n)
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
        printf("Frequency of %d : %d\n",arr[i],cnt);
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
    frequency_of_array_elements(arr,n);
}