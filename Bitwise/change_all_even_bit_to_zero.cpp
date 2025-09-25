#include<iostream>
using namespace std;
int main()
{
    int data,bit;
    cout<<"Enter the data: ";
    cin>>data;
    for(bit=7;bit>=0;bit--)
    {
        cout<<((data>>bit)&1);
        if(bit%4==0 && bit !=0)
        {
            cout<<" ";
        }
    }
    cout<<endl;
    for(bit=7;bit>=0;bit--)
    {
        if((bit%2) ==0 && ((data>>bit)&1)==1)
        {
            data=((1<<bit))^data;
        }
    }
    cout<<endl;
    for(bit=7;bit>=0;bit--)
    {
        cout<<((data>>bit)&1);
        if(bit%4==0 && bit !=0)
        {
            cout<<" ";
        }
    }
}