#include<iostream>
#include<vector>
using namespace std;
void Print(vector<string> &vec)
{
    for(string i:vec)  //for each loop
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
void sort_based_on_length(vector<string> &vec)
{
    int size=vec.size();
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(vec[j].size()>vec[j+1].size())
            {
                string temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }

}
int main()
{
    vector<string> vec;  //vector of string
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cout<<"Enter the string for vec: ";
        cin>>temp;
        vec.push_back(temp);
    }

    Print(vec);
    sort_based_on_length(vec);
    cout<<"sorting after based on length: "<<endl;
    Print(vec);
}