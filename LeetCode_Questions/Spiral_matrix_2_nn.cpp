//Leetcode problem no. 59
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value for matrix: ";
    cin>>n;
    // Create 2D vector with n rows, n cols, initialized to 0
    vector<vector<int>> arr(n, vector<int> (n,0)) ;
    
    int top=0,bottom=n-1;  //rows
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
        for(int i=right;i>=left;i--)
        {
            arr[bottom][i]=val++;
        }
        bottom--;
        //bottom to top
        for(int i=bottom;i>=top;i--)
        {
            arr[i][left]=val++;
        }
        left++;
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // cout<<arr[i][j]<<" ";
            printf("%4d",arr[i][j]);
        }
        cout<<endl;
    }
    return 0;
}