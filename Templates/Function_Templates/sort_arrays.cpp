#include<iostream>
using namespace std;
template <typename any,typename any1>
void Sort(any *& ref, any1 n)   //dynamically allocated array (int* arr) and 
{                              //receive it using a reference to a pointer, i.e., int*& ref.
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(ref[j]>ref[j+1])
            {
                any temp=ref[j];
                ref[j]=ref[j+1];
                ref[j+1]=temp;
            }
        }
    }
}
template <typename any,typename any1>
void Print(any *& ref,any1 n)
{
    for(int i=0;i<n;i++)
    {
        cout<<ref[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    
    int *arr=new int[n];      //created array dynamically

    for(int i=0;i<n;i++)
    {
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    cout<<"Before sort: "<<endl;
    Print(arr,n);
    Sort(arr,n);
    cout<<"After sort: "<<endl;
   Print(arr,n);
    return 0;
}