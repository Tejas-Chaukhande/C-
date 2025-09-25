#include<iostream>
#include<vector>
using namespace std;
int main()
{ //When shortage of memory happen, then double size of vector is created.
    vector<int> vec;

    vec.push_back(10);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    vec.push_back(10);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    vec.push_back(10);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    vec.push_back(10);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    vec.push_back(10);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    //When shortage of memory happen, then double size of vector is created.
}