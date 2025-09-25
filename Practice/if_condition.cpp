#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"ENter the value for a:";
    cin>>a; 
    if(a>0)
    {
        cout<<"positive...\n";
        goto A;
    }
    else{
    
     A:   cout<<"Negative...\n";
    }
}