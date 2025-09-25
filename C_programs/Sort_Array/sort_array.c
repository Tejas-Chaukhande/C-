#include<stdio.h>
#include "sort_array.h"
void input(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the array element: ");
        scanf("%d",&arr[i]);
    }
}
void print(int *arr, int m)
{
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void merge_two_array(int *merge_array,int *arr1,int n,int *arr2, int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        merge_array[i]=arr1[i];
    }
    for(int j=i,k=0;j<m+n;j++,k++)
    {
        merge_array[j]=arr2[k];
    }
}
void sort(int *merged,int size,char ch)
{
    if(ch=='A'||ch=='a')
    {
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(merged[i]>merged[j])
                {
                    int temp=merged[i];
                    merged[i]=merged[j];
                    merged[j]=temp;
                }
            }
        }

    }
    else if(ch=='D'||ch=='d')
    {
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(merged[i]<merged[j])
                {
                    int temp=merged[i];
                    merged[i]=merged[j];
                    merged[j]=temp;
                }
            }
        }
    }
}