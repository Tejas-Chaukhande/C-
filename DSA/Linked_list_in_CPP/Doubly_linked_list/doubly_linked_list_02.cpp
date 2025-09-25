#include<iostream>
using namespace std;
class Node
{
    public:Node *prev;
           int data;
           Node *link;
           Node(int val)
           {
            data=val;
            prev=nullptr;
            link=nullptr;
           }
};
class Doubly_list
{
    private: Node *head;
    public: Doubly_list()
            {
                head=nullptr;
            }
            void pushback(int val)
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
                    newnode->prev=temp;
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
                    while(temp != NULL)
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
                    cout<<"List is Empty...!\n";
                }
                else
                {
                    Node *temp=head;
                    Node *prev=nullptr;
                    Node *next=nullptr;
                    while(temp != NULL)
                    {
                        next=temp->link;
                        temp->link=prev;
                        prev=temp;
                        temp=next;
                    }
                    head=prev;
                }
            }
            void reverse_traverse()
            {
                Node *temp=head;
                while(temp->link!=NULL)
                {
                    temp=temp->link;  //going to the last node
                }

                while(temp!=NULL)  
                {
                    cout<<temp->data<<"-->";  //printing from backword
                    temp=temp->prev;
                }
                cout<<"NULL"<<endl;
            }
};
int main()
{
    Doubly_list l;
    l.pushback(10);
    l.pushback(20);
    l.pushback(30);
    l.pushback(40);
    l.pushback(50);
    l.traverse();
   // l.reverse();
    l.reverse_traverse();

    return 0;
}