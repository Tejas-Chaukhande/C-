//Leetcode que 2
#include<iostream>
using namespace std;
class List;
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
    public:Node *head;
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
        else{
            Node *temp=head;
            while(temp->link != NULL)
            {
                temp=temp->link;
            }
            temp->link=newnode;
        }
    }
    void traverse()
    {
        Node *temp=head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<"NULL"<<endl;
    }
    
};

int main()
{
    List l1,l2;
    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(3);
    l1.traverse();
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(4);
    l2.traverse();
    
    return 0;
}