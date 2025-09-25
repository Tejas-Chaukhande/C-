#include<iostream>
using namespace std;
class Node
{
    public: int data;
            Node *link;
            Node(int val)
            {
                this->data=val;
                this->link=NULL;
            }
};
class List
{
    private: Node *head;
    public: List()
            {
                head=NULL;
            }
            void pushback(int val)
            {
                Node *newnode=new Node(val);
                if(head==NULL)
                {
                    head=newnode;
                    return;
                }
                Node *temp=head;
                while(temp->link != NULL)
                {
                    temp=temp->link;
                }
                temp->link=newnode;
            }
            void traverse()
            {
                if(head==NULL)
                {
                    cout<<"List is empty....!\n";
                }
                else
                {
                    Node *temp=head;
                    while(temp)
                    {
                        cout<<temp->data<<"-->";
                        temp=temp->link;
                    }
                    cout<<"NULL"<<endl;
                }
            }
            void reverse()
            {
                if(head==NULL)
                {
                    cout<<"LIst is empty...!\n";
                    return;
                }    
                Node *prev=NULL,*next=NULL, *temp=head;
                while(temp!= NULL)
                {
                    next=temp->link;
                    temp->link=prev;
                    prev=temp;
                    temp=next;
                }
                head=prev;
            }
};
int main()
{
    List l;
    l.pushback(10);
    l.pushback(20);
    l.pushback(30);
    l.pushback(40);
    l.pushback(50);
    l.traverse();
    l.reverse();
    l.traverse();
    return 0;
}