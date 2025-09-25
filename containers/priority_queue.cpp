#include<iostream>
#include<queue>
using namespace std;
int main()
{
   priority_queue<int> pq;  
  // priority_queue<int, vector<int>,greater<int>> pq;   //reverse priority queue
    pq.push(5);
    pq.push(1);
    pq.push(3);
    pq.push(4);
    pq.push(2);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();          //removing each element from top
    }
    cout<<endl;
}