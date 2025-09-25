#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(7);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(1);

     cout<<"lower_bound: "<<*(s.lower_bound(4))<<endl;

    for(int i: s)
    {
        cout<<i<<" ";
    }
    return 0;
}