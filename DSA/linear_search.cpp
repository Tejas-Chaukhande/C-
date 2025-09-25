#include<iostream>
using namespace std;
int find_item_index(int item,int *arr,int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==item)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int n,i;
    printf("Enter the size of an array: ");
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    int item;
    cout<<"Enter the item to find: ";
    cin>>item;

    i=find_item_index(item,arr,n);
    if(i==-1)
    {
        cout<<"Item not found...!\n";
    }
    else{
        cout<<"Item found at: "<<i;
    }
}