#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int; //will create the 4 byte of memory dynamically
    int *arr=new int[5];//will create 5 block of memory for int with 4 bytes

    for(int i=0;i<5;i++)
    {
        cout<<"ENter the array element: ";
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    delete []arr;
}