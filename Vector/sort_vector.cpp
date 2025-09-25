#include<iostream>
#include<vector>
using namespace std;
void Print(vector<int> &vec)
{
    int size=vec.size();
    cout<<"vectr: ";
    for(int i=0;i<size;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void Sort(vector<int> &vec)
{
    int n=vec.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(vec[j]>vec[j+1])
            {
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of an Vector: ";
    cin>>n;

    vector<int> vec;   //created Empty vector

    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter the vector element: ";
        cin>>x;
        vec.push_back(x);
    }
    Sort(vec);  //Passing reference of vec , no need to pass size
    Print(vec);
    return 0;
}
