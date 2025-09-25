//if matrix of m*n add some checks

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the rows: ";
    cin>>m;
    cout<<"Enter the columns: ";
    cin>>n;
    // Create 2D vector with n rows, n cols, initialized to 0
    vector<vector<int>> arr(m, vector<int> (n,0)) ;
    
    int top=0,bottom=m-1;  //rows
    int left=0,right=n-1;  //cols
    int val=1;
    
    while(left<=right && top<=bottom)
    {
        //left to right
        for(int i=left;i<=right;i++)
        {
            arr[top][i]=val++;
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++)
        {
            arr[i][right]=val++;
        }
        right--;
        //right to left
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                arr[bottom][i]=val++;
            }
            bottom--;
        }
        //bottom to top
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                arr[i][left]=val++;
            }
            left++;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(4)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}