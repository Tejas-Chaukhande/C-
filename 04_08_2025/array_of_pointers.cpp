#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    
    int *ptr[n];    //Array of pointers

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array element: ";
        ptr[i]= new int;
        cin>>*ptr[i];
    }
    cout<<endl;
    cout<<"Array elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*ptr[i]<<" ";
    }
    return 0;
}