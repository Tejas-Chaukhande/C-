/*
Selection sort:- 1st loop will be run upto (n-1)/(i<n-1)
                 2nd loop find the minimum element index,
                 Find the smallest element's index, and 
                 Replace smallest element with i'th position

                 Time complexity:-  O(n2)
                 Space complexity:- O(1)
*/
#include<iostream>
using namespace std;
void Selection_sort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array element: ";
        cin>>arr[i];
    }
    Selection_sort(arr,n);

    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}