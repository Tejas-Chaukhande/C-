#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int data,byte1,byte2;
    cout<<"Enter the data in hexa(ff00): ";
    cin>>hex>>data;

    cout<<"Enter byte1: ";
    cin>>byte1;
    cout<<"Enter byte2: ";
    cin>>byte2;

    byte1=byte1*8; //1 byte contains 8 bits, hence multiplied by 8
    byte2=byte2*8;

    cout<<"Before Swapping: "<<endl;
    for(int i=31;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%8==0 && i!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;

    //main logic for swap the bytes
    //data = (data&(~((255<<byte1)|(255<byte2)))) | (((data>>byte1)&255)<<byte2) | (((data>>byte2)&255)<<byte1);
    data = (data & ~((255 << byte1) | (255 << byte2))) |
       (((data >> byte1) & 255) << byte2) |
       (((data >> byte2) & 255) << byte1);

    cout<<"After Swapping: "<<endl;
    for(int i=31;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%8==0 && i!=0)
        {
            cout<<" ";
        }
    }

}