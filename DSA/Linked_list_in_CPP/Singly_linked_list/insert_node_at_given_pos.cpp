#include<iostream>
using namespace std;
int cnt=0;
class Node
{
    public:int data;
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
                Node *newnode= new Node(val);
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
                cnt++;
            }
            void display()
            {
                if(head==NULL)
                {
                    cout<<"List is empty....!\n";
                }
                else{
                    Node *temp=head;
                    while(temp != NULL)
                    {
                        cout<<temp->data<<"-->";  //(*temp).data
                        temp=temp->link;
                    }
                    cout<<"NULL"<<endl;
                }
            }
            void insert(int val,int pos)
            {
                if(pos > cnt+1 || pos < 0)
                {
                    cout<<"Invalid position entered...!\n";
                }
                else
                {
                    Node *newnode=new Node(val);
                    if(pos==1)
                    {
                        newnode->link=head;
                        head=newnode;
                    }
                    else{
                        Node *temp=head;
                        for(int i=1;i<pos-1;i++)
                        {
                            temp=temp->link;
                        }
                        newnode->link=temp->link;
                        temp->link=newnode;
                    }
                    cnt++;
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
    l.display();
    l.insert(60,3);
    l.display();
    l.insert(70,1);
    l.display();
    l.insert(80,7);
    l.display();
    return 0;
}