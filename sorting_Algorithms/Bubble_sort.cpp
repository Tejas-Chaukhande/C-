/*
Bubble Sort:- Always compares the adjacent elements and swap it.
              In each iteration highest element will set at last in array.
              Hence inner loop always runs upto (n-(i+1))

              Time complexity:-           Best  = O(1)
                                 Average/ Worst = O(n2)

            Space complexity:-  O(1)
*/
#include<iostream>
using namespace std;
void Bubble_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-(i+1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
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
    Bubble_sort(arr,n);

    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}