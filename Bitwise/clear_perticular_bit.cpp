#include<iostream>
using namespace std;
int main()
{
    int data,bit;
    cout<<"enter the data: ";
    cin>>data;
    cout<<"enter the bit to set: ";
    cin>>bit;

    cout<<"Before setting the bit: "<<endl;
    for(int i=15;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%4==0 && i!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;

    data=data&(~(1<<bit));    //to set bit

    cout<<"After setting the bit: "<<endl;
    for(int i=15;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%4==0 && i!=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}