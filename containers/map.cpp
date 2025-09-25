#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[53]="tejas";
    m[47]="Sanket";
    m[30]="Prasad";
    m[14]="rases";

    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}