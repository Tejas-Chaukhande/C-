#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector <int> vec= {1,2,3,4};
    vector <int> vec;  // bydefault size is zero
    
    vec.push_back(10);   //added element at last
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    
    cout<<"size of vector:"<<vec.size()<<endl;   //vec.size() for getting size of vector
    
    vec.pop_back();   //deleting last element from vector ex..40
    
    cout<<"front: "<<vec.front()<<endl; //will return 1st element of vector
    cout<<"back: "<<vec.back()<<endl;  //will return last element of vector
    
    cout<<"at(index=1): "<<vec.at(1)<<endl; //will return value at index =1
    
    
    
    for(int i:vec)
    {
        cout<<i<<" ";
    }
}