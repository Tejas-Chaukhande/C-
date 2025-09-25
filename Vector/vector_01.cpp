#include<iostream>
#include<vector>
using namespace std;
void Print(vector<int> &v,int size)
{
    for(char i: v)   //For each loop
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // for(int i=0;i<size;i++)     //for each loop, not need size of vector here
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
}
int main()
{
    
    vector<int> vec1 ={65,66,67,68,79};    //int is type of element, vec is name assigned to vector
    vector<int> vec2(5,97);      //creating vector of 5 elements with default value 97
    vec1[2]=8;
    int size1=vec1.size();
    int size2=vec2.size();

    Print(vec1,size1);
    Print(vec2,size2);
}