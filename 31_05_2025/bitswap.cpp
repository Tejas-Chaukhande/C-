#include<iostream>
using namespace std;
int main()
{
    int bit1,bit2,data;
    cout<<"Enter the data: ";
    cin>>data;
    cout<<"ENter the bit1: ";
    cin>>bit1;
    cout<<"Enter the bit2: ";
    cin>>bit2;
    cout<<"Before swap: "<<endl;
    for(int i=15;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%4==0 && i!=0)
        {
            cout<<" ";
        }
      
    }
  cout<<endl;
    data=data&(~((1<<bit1)|(1<<bit2)))|((data>>bit1)&1)<<bit2 | ((data>>bit2)&1)<<bit1;

    cout<<"After swap: "<<endl;
    for(int i=15;i>=0;i--)
    {
        cout<<((data>>i)&1);
        if(i%4==0 && i!=0)
        {
            cout<<" ";
        }
    }


}