/*
Exception is the Runt time error, which terminates the program abnormally.
To handle the run time error, we have 3 keywords (try,throw,catch)[2 blocks (try, catch) and 1 statement(throw)]
By handling the run time error, we can terminates the program normally.

*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value for a and b: ";
    cin>>a>>b;

    try
    {
        if(b==0)
            throw b;
        int result=a/b;
        cout<<"Result: "<<result<<endl;
    }
    catch(int x)
    {
        cout<<"Exception: Divided by 0"<<endl;
    }
    cout<<"Normal Termination"<<endl;
    return 0;
}