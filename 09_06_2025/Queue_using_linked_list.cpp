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
class Queue
{
    private: Node* front;
             Node *rear;
    public: Queue()
            {
                front=nullptr;
                rear=nullptr;
            }
            void push(int val)
            {
                Node *newnode=new Node(val);
                if(front==NULL)
                {
                    front=rear=newnode;
                }
                else{
                    Node *temp=front;
                    while(temp->link!=NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=newnode;
                    rear=newnode;
                }
            }
            void traverse()
            {
                if(front==NULL && rear==NULL)
                {
                    cout<<"Queue is Empty...!\n";
                }
                else
                {
                  Node *temp=front;
                  while(temp != NULL)
                  {
                    cout<<temp->data<<"-->";
                    temp=temp->link;
                  }   
                  cout<<"NULL"<<endl;
                }
            }
            void pop()
            {
                if(front==NULL && rear==NULL)
                {
                    cout<<"Queue is Empty...!\n";
                }
                else if(front==rear)
                {
                    delete front;
                    delete rear;
                    front=rear=NULL;
                }
                else
                {
                    cout<<front->data<<" Deleted...!\n";
                    Node *temp=front;
                    front=front->link;
                    delete temp;
                }
            }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.traverse();
    q.pop();
    q.traverse();
    q.pop();
    q.traverse();
    q.pop();
    q.traverse();
    q.pop();
    q.traverse();
    q.pop();
    q.traverse();
    return 0;
}