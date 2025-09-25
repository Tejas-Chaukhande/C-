#include<iostream>
using namespace std;
int isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int max,min;
    cout<<"Enter the range (min-Max): ";
    cin>>min>>max;
    for(int i=min;i<=max;i++)
    {
        if(isprime(i) && i>=2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}