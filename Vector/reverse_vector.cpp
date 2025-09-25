#include<iostream>
#include<vector>
using namespace std;
void Input(vector<int> &vec)
{
    int n;
    cout<<"Enter the size of an vector: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter the vec element: ";
        cin>>x;
        vec.push_back(x);
    }
}
void Print(vector<int> &vec)
{
    cout<<"Vector: ";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void Reverse(vector<int> &vec)
{
    int size=vec.size();
    for(int i=0,j=size-1;i<j;i++,j--)
    {
        int temp=vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
    }
}
int main()
{  
    vector<int> vec; //created integer vector 
    Input(vec);
    Print(vec);
    Reverse(vec);
    Print(vec);
    return 0;
}