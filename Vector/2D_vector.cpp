/*2D vector is the collection of 1D vector*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> vec;       //2D vector, collection of 1D vectors
    int m,n;
    cout<<"Enter the size of row: ";
    cin>>m;
    cout<<"Enter the size of col: ";
    cin>>n;

    for(int i=0;i<m;i++)
    {
        vector<int> row;
        for(int j=0;j<n;j++)
        {
            int x;
            cout<<"Enter element: ";
            cin>>x;
            row.push_back(x);   //addint elements in row
        }
        vec.push_back(row);     //adding row in vec
    }

    cout<<"2D Vector: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}