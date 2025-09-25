#include<iostream>
using namespace std;
class Node
{
    public: Node *prev;
            int data;
            Node *link;
            Node(int val)
            {
                data=val;
                prev=nullptr;
                link=nullptr;
            }
};
class Doubly_Circular_list
{
    private: Node *head;
    public:  Doubly_Circular_list()
             {
                head=nullptr;
             }
             void pushback(int val)
             {
                Node *newnode=new Node(val);
                if(head==NULL)
                {
                    head=newnode;
                    head->prev=head;
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
                    newnode->prev=temp;
                    newnode->link=head;
                    head->prev=newnode;
                }
             }
             void traverse()
             {
                if(head==NULL)
                {
                    cout<<"list is empty...!\n";
                }
                else
                {
                    Node *temp=head;
                    do{
                        cout<<temp->data<<"-->";
                        temp=temp->link;
                    }while(temp != head);
                    cout<<endl;
                }
             }
             void pop_back()
             {
                if(head==NULL)
                {
                    cout<<"List is empty...\n";
                }
                else if(head==head->link)
                {
                    delete head;
                    head=NULL;
                }
                else
                {
                    Node *last = head->prev;
                    Node *secondLast = last->prev;

                    secondLast->link = head;
                    head->prev = secondLast;
                    delete last;
                }
             }
            };
int main()
{
    Doubly_Circular_list l;
    l.pushback(10);
    l.pushback(20);
    l.pushback(30);
    l.pushback(40);
    l.pushback(50);
    l.traverse();
    l.pop_back();
    l.traverse();
    l.pop_back();
   
    return 0;
}