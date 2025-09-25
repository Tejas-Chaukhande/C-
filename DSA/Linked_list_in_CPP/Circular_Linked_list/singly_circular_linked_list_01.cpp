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
class Doubly_linked_list
{
    private: Node *head;
    public: Doubly_linked_list()
            {
                head=nullptr;
            }
            void pushback(int val)
            {
                Node *newnode=new Node(val);
                if(head==NULL)
                {
                    head=newnode;
                    head->link=head;
                }
                else
                {
                    Node *temp=head;
                    while(temp->link != head)
                    {
                        temp=temp->link;
                    }
                    temp->link=newnode;
                    newnode->link=head;
                }
            }
            void traverse()
            {
                if(head==NULL)
                {
                    cout<<"List is Empty...!\n";
                }
                else
                {
                    Node *temp=head;
                    do
                    {
                        cout<<temp->data<<"-->";
                        temp=temp->link;
                    }while(temp != head);
                    cout<<"NULL"<<endl;
                }
            }
};
int main()
{
    Doubly_linked_list l;
    l.pushback(10);
    l.pushback(20);
    l.pushback(30);
    l.pushback(40);
    l.pushback(50);
    l.traverse();
    return 0;
}