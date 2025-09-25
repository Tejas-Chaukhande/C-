#include<iostream>
using namespace std;
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
    private: Node *top;
    public: List()
            {
                top=NULL;
            }
            void push(int val)
            {
                Node *newnode=new Node(val);
                if(top==NULL)
                {
                    top=newnode;
                }
                else
                {
                    newnode->link=top;
                    top=newnode;
                }
            }
            void traverse()
            {
                if(top==NULL)
                {
                    cout<<"Stack is empty...!\n";
                }
                else
                {
                    Node *temp=top;
                    while(temp)
                    {
                        cout<<temp->data<<endl;
                        temp=temp->link;
                    }
                }
            }
            void pop()
            {
                if(top==NULL)
                {
                    cout<<"Stack is emtpy...!\n";
                }
                else
                {
                    Node *temp=top;
                    top=temp->link;
                    cout<<temp->data<<" Removed"<<endl;
                    delete temp;
                }
            }
            void peak()
            {
                if(top==NULL)
                {
                    cout<<"Stack is empty...!\n";
                }
                else
                {
                    cout<<top->data<<" is at peak\n";
                }
            }
};
int main()
{
    List l;
    l.push(10);
    l.push(20);
    l.push(30);
    l.push(40);
    l.push(50);
    l.traverse();
    l.pop();
    l.traverse();
    l.peak();
    l.pop();
    l.traverse();
    l.peak();
    l.pop();
    l.traverse();
    l.peak();
    l.pop();
    l.traverse();
    l.peak();
    l.pop();
    l.traverse();
    l.peak();
    return 0;
}