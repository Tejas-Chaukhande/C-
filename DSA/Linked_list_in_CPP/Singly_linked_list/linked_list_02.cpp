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
                    newnode->link=head;
                    head=newnode;
                }
                else
                {
                    newnode->link=head;
                    head=newnode;
                }
            }
            void display()
            {
                if(head==NULL)
                {
                    cout<<"List is Empty...!\n";
                    return;
                }
                Node *temp=head;
                cout<<"List contains: "<<endl;
                cout<<"\nhead-->";
                while(temp != NULL)
                {
                    cout<<temp->data<<"-->";          //(*temp).data
                    temp=temp->link;
                }
                cout<<"NULL\n"<<endl;
            }
            void push_back(int data)
            {
                Node *newnode=new Node(data);
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
            void pop_front()
            {
                if(head==NULL)
                {
                    cout<<"List is Empty...\n";
                }
                else{
                    
                        Node *temp=head;
                        head=head->link;
                        temp->link=NULL;
                        delete temp;

                    }   
                    
                
            }
            void pop_back()
            {
                if(head==NULL)
                {
                    cout<<"List is Empty...!\n";
                    return;
                }
                if(head->link == NULL)
                {
                    delete head;
                    head=NULL;
                }
                else{
                    Node *temp=head;
                    while(temp->link->link != NULL)
                    {
                        temp=temp->link;
                    }
                    delete temp->link;
                    temp->link=NULL;
                }
            }
};
int main()
{
    List l;
    do{
        int n,item;
        cout<<"1. push_front\n2. push_back\n3. display\n4. pop_front\n5. pop_back\n6. exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the element to insert: ";
                   cin>>item;
                   l.push_front(item);
                   break;
            case 2:cout<<"Enter the element to insert: ";
                   cin>>item;
                   l.push_back(item);
                   break;
            case 3:l.display();
                   break;
            case 4:l.pop_front();
                   break;
            case 5:l.pop_back();
                    break;
            case 6:exit(0);
            default:cout<<"Invalid choice...!\n";
        }
    }while(1);
    return 0;
}