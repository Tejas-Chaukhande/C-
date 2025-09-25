//Solution using extra array of size n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    string choice;
    int pos;
    cout<<"Enter the choice(left/right): ";
    cin>>choice;
    cout<<"Enter the position: ";
    cin>>pos;
    int *temp=new int[n];
    if(pos>=0 && pos<=n)
    {
        for(int i=pos,j=0;i<n;i++,j++)
        {
            if(choice == "right")
            {
                temp[i]=arr[j];
            }
            else if(choice == "left")
            {
                temp[j]=arr[i];
            }
            else
            {
                cout<<"invalid choice...!";
            }
        }
        for(int i=n-pos,j=0;i<n;i++,j++)
        {
            if(choice=="right")
            {
                temp[j]=arr[i];
            }
            else if(choice == "left")
            {
                temp[i]=arr[j];   
            }
            else
            {
                cout<<"Invalid choice...!";
            }
        }
    }
    else
    {
        printf("Invalid position...!\n");
    }
    //coping from temp to original
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    //Printing
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}