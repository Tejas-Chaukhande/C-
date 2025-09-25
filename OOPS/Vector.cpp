#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5};

    for(int i:vec)
    {
        cout<<i;
    }
cout<<endl;
    // vector<char> name={'T','E','J','A','S'};
    // for(char c:name)
    // {
    //     cout<<c;
    // }
    int size=vec.size();
    for(int i=0;i<size;i++)
    {
        cout<<vec[i];
    }

}