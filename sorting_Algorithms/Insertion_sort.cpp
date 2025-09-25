/*
Insertion sort:- Adding element in array in sorting order, run time sorting and adding 
 
Time complexity:-      Best  = O(n)
                   Avg/Worst = O(n2)
*/
#include<iostream>
using namespace std;
void Insertion_sort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter the array element: ";
        cin>>x;
        int j=i;
        while(j>0 && x<arr[j-1])
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=x;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    Insertion_sort(arr,n);   //taking array element at run time and inserting in sorted order
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}