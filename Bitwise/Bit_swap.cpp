#include<iostream>
using namespace std;
int main()
{
    int data,bit1,bit2;
    cout<<"Enter the data: ";
    cin>>data;
    cout<<"Enter the bit1 : ";
    cin>>bit1;
    cout<<"Enter the bit2: ";
    cin>>bit2;
    cout<<"Before Bits swap"<<endl;
    for(int i=15;i>=0;i--)
    {
        cout<<((data>>i)&1)<<" ";
        if(i%4==0 and i!=0)
        {
            cout<<" ";
        }
    }

    // if(((data>>bit1)&1)!=((data>>bit2)&1))
    // {
    //     data=data^(1<<bit1);
    //     data=data^(1<<bit2);
    // }

    data=data&(~((1<<bit1)|(1<<bit2))) | (((data>>bit1)&1)<<bit2) | (((data>>bit2)&1)<<bit1); //main logic

    cout<<"\nAfter Bits swap"<<endl;
    for(int i=15;i>=0;i--)
    {
        cout<<((data>>i)&1)<<" ";
        if(i%4==0 and i!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;

    cout<<"Bit at"<<bit1<<": "<<((data>>bit1)&1)<<endl;
    cout<<"Bit at"<<bit2<<": "<<((data>>bit2)&1)<<endl;
}