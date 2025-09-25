//remove duplicate from vector
#include<iostream>
#include<vector>
using namespace std;
int Remove_duplicate(vector<int> &vec)
{
    int size=vec.size();
    for(int i=0;i<size;i++)
    {
        int cnt=0;
        for(int j=0;j<size;j++)
        {
            if(vec[i]==vec[j])
            {
                cnt++;
            }
        }
        if(cnt>=2)
        {
            vec.erase(vec.begin() + i);
            --i;     //after removing the element at i'th postion i should be back by 1 element
            --size;  //after removing the element size also reduce by 1
        }
    }
    if(size==vec.size())
    {
        cout<<"No duplicate element to remove...!\n";
        return 0;
    }
    return 1;
}
void Print(vector<int> &vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  vector<int> vec;
  int n;
  cout<<"Enter the size of an vector: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int x;
      cout<<"Enter element: ";
      cin>>x;
      vec.push_back(x);
  }
  cout<<"Vector: "<<endl;
  Print(vec);
  int x=Remove_duplicate(vec);
  if(x==1)
  {
    cout<<"After removed duplicate: "<<endl;
  }
  Print(vec);
  return 0;
}