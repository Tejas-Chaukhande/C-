#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;   //size=0
    vec.push_back(1);
    cout<<"size:"<<vec.size()<<" "<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(2);
    cout<<"size:"<<vec.size()<<" "<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(3);
    cout<<"size:"<<vec.size()<<" "<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(4);
    cout<<"size:"<<vec.size()<<" "<<"capacity: "<<vec.capacity()<<endl;

    vec.pop_back();
    cout<<"size:"<<vec.size()<<" "<<"capacity: "<<vec.capacity()<<endl;
    vec.pop_back();
    cout<<"size:"<<vec.size()<<" "<<"capacity: "<<vec.capacity()<<endl;
    //int n;
    // cout<<"Enter the size of vector: ";
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<"Enter the vector element: ";
    //     int x;
    //     cin>>x;
    //     vec.push_back(x);
    // }
    // cout<<"Vector is: ";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
}
