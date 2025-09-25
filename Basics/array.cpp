#include<iostream>
using namespace std;
int *Input(int size)
{
    int *ptr=new int[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter element: ";
        cin>>ptr[i];
    }
    return ptr;
}
void Print(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int *arr=NULL;
    int n;
    cout<<"ENter the size of an array: ";
    cin>>n;
    arr=Input(n);
    Print(arr,n);
    delete []arr;
}