#include<iostream>
using namespace std;
int cnt=0;
class Node
{
    public: int data;
            Node *link;
            Node(int val)
            {
                data=val;
                link=NULL;
            }
};
class List
{
    private: Node *head;
    public: List()
            {
               head=NULL; 
            }
            void push_back(int val)
            {
                Node *newnode=new Node(val);
                if(head==NULL)
                {
                    head=newnode;
                }
                else
                {
                    Node *temp=head;
                    while(temp->link != NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=newnode;
                }
                cnt++;

            }
            void traverse()
            {
                cout<<"List is: "<<endl;
                Node *temp=head;
                while(temp)
                {
                    cout<<temp->data<<"-->";
                    temp=temp->link;
                }
                cout<<"NULL"<<endl;
            }
            void nth_from_end(int n)
            {
                if(head==NULL)
                {
                    cout<<"List is empty...!\n"; 
                }
                else if(n>cnt || n<=0)
                {
                    cout<<"Invalid position...!\n";
                }
                else{
                    Node *temp=head;
                    for(int i=0;i<cnt-n;i++)
                    {
                        temp=temp->link;
                    }
                    cout<<"nth node from end: "<<temp->data<<endl;
                }
            }
};
int main()
{
    List l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);
    l.push_back(70);
    l.push_back(80);
    l.push_back(90);
    l.traverse();
    while(1)
    {
    int n;
    cout<<"Enter the node from end: ";
    cin>>n;
    l.nth_from_end(n);
    }
    return 0;
}