#include<stdio.h>
#include<stdlib.h>
#include"sort_array.h"
int main()
{
    int n,m;
    printf("Enter the size of an array1: ");
    scanf("%d",&n);

    int *arr1=(int *)calloc(n,sizeof(int));
    input(arr1,n);

    printf("Enter the value of an array2: ");
    scanf("%d",&m);

    int *arr2=(int *)calloc(m,sizeof(int));
    input(arr2,m);


    int *merge_array=(int *)calloc(m+n,sizeof(int));
    
    merge_two_array(merge_array,arr1,n,arr2,m);

    print(merge_array,m+n);

    char ch;
    printf("ENter the char 'A' for ascending and 'D' for Descending: ");
    scanf("\n%c",&ch);
    sort(merge_array,m+n,ch);
    print(merge_array,m+n);


    free(arr1);
    free(arr2);
    free(merge_array);
    return 0;
}

