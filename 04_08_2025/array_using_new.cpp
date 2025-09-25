#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    cout<<"Array Elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete []arr;
    return 0;

}