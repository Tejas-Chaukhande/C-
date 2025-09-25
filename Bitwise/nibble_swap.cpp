#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int data,nib1,nib2;
    cout<<"ENter the data in Hex(f0f0): ";
    cin>>hex>>data;
    cout<<"Enter Nibble1 : ";
    cin>>nib1;
    cout<<"Enter the Nibble2 : ";
    cin>>nib2;

    nib1=nib1*4;   //1 nibble means 4 bits hence multiplied by 4
    nib2=nib2*4;

    cout<<"Before Nibble Swapping: "<<endl;
    for(int i=31;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%4==0 && i!=0)
        {
            cout<<" ";
        }
    }
    cout<<"After Nibble Swapping: "<<endl;

    data=(data&(~((15<<nib1)|(15<<nib2)))) | (((data>>nib1)&15)<<nib2) | (((data>>nib2)&15)<<nib1);
    for(int i=32;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%4==0 && i!=0)
        {
            cout<<" ";
        }
    }

}