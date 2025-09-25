#include<iostream>
using namespace std;
int cnt=0;
class Node
{
    public: int data;
            Node *link;
            Node(int val)
            {
                data = val;
                link = NULL;
            }
};
class List
{
    private: Node *head;
    public: List()
            {
                head = NULL;
            }
            void push(int val)
            {
                Node *newnode = new Node(val);
                if(head ==NULL)
                {
                    head = newnode;
                }
                else
                {
                    Node *temp=head;
                    while(temp->link != NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link = newnode;
                }
                cnt++;
            }
            void display()
            {
                if(head == NULL)
                {
                    cout<<"LIst is Empty....!"<<endl;
                }
                else
                {
                    Node *temp=head;
                    while(temp)
                    {
                        cout<<temp->data<<" ";
                        temp=temp->link;
                    }
                    cout<<endl;
                }
            }
            void sort()
            {
                if(head==NULL)return;
                bool swapped;
                do
                {
                    swapped=false;
                    Node *temp=head;
                    while(temp->link != NULL)
                    {
                        if(temp->data > temp->link->data)
                        {
                            int x=temp->data;
                            temp->data=temp->link->data;
                            temp->link->data=x;
                            swapped = true;                                                                                                                                  
                        }
                        temp=temp->link;
                    }
                } while(swapped);
            }
};
int main()
{
    List l;
    l.push(40);
    l.push(30);
    l.push(20);
    l.push(10);
    l.push(50);
    l.display();
    l.sort();
    l.display();
    return 0;
}