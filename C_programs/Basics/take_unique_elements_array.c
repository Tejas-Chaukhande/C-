#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int isRepeated(int *arr,int i)
{
    for(int j=0;j<i;j++)
    {
        if(arr[i]==arr[j])
        {
            return 1;
        }
   }
   return 0;
}
void input(int *arr, int n)
{
    srand(getpid());
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%20;   //0 to 19
        if(isRepeated(arr,i))
        {
            i--;
        }
    }
}
void print(int *arr, int n)
{    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
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
}