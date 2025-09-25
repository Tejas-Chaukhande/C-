#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array: "<<size<<endl;

    int *ptr = arr;     //pointer to an array

    cout<<"Array elements are: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<*(ptr+i)<<" ";    //cout<<ptr[i]<<" ";
    }
    return 0;
}