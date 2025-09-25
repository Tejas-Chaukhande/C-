#include<iostream>
using namespace std;
class Node
{
    public: int data;
            Node *link; //self referential class

            Node(int data)
            {
                this->data=data;
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
            void push_front(int val)
            {
                Node *newnode=new Node(val);
                if(head==NULL)
                {
                    head=newnode;
                }
                else{
                    newnode->link=head;
                    head=newnode;
                }
            }
            void push_back(int val)
            {
                Node *newnode=new Node(val);
                if(head==NULL)
                {
                    newnode->link=head;
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
            void display()
            {
                Node *ptr=head;
                while(ptr!=NULL)
                {
                    cout<<ptr->data<<"-->";
                    ptr=ptr->link;
                }
                cout<<"Null"<<endl;
            }
};
int main()
{
    List l;
    l.push_front(10);   //Add at first
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.push_back(50);    //Add at last
    l.display();
    return 0;
}