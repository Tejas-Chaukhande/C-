#include<iostream>
using namespace std;
int main()
{
    int data1,data2;
    cout<<"Enter the data1: ";
    cin>>data1;
    cout<<"Enter the data2: ";
    cin>>data2;

    for(int i=7;i>=0;i--)
    {
        cout<<((data1>>i)&1)<<" ";
    }
    cout<<endl;
    for(int i=7;i>=0;i--)
    {
        cout<<((data2>>i)&1)<<" ";
    }

    int cnt=0;
//------------------------------------------------------
    //int data=data1^data2;

    // for(int i=7;i>=0;i--)
    // {
    //     if(((data>>i)&1)==1)
    //     {
    //         cnt++;
    //     }
    // }
//--------------------------------------------------------
                //OR
    for(int i=7;i>=0;i--)
    {
        if(((data1>>i)&1)!=((data2>>i)&1))
            cnt++;
    }
    cout<<endl;
    cout<<"Number of bits need to flipped: "<<cnt<<endl;
    return 0;
}