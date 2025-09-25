#include<iostream>
using namespace std;
int main()
{
    int data,bit;
    cout<<"Enter the data: ";
    cin>>data;
    int cnt=0;
    for(bit=31;bit>=0;bit--)
    {
        if((data>>bit)&1 == 1)
        {
            cnt++;
        }
    }
    cout<<cnt<<" are set bits in "<<data<<endl;
    return 0;
}