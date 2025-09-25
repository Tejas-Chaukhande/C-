#include<iostream>
using namespace std;
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
                Node *newnode=new Node(val);
                if(head == NULL)
                {
                    newnode->link=head;
                    head=newnode;
                }
                else
                {
                    Node *temp=head;
                    while(temp->link != NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=newnode;
                }
            }
            void traverse()
            {
                if(head == NULL)
                {
                    cout<<"List is Emtpy...\n";
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
            int delete_based_on_data(int val)
            {
                int flag=0;
                if(head == NULL)
                {
                    cout<<"List is Empty...\n";
                    return -1;
                }
                if(head->data == val)
                {
                    Node *temp=head;
                    int item=head->data;
                    head=head->link;
                    delete temp;
                    return item;
                }
                Node *temp=head, *prev=head;
                while(temp != NULL && temp->data != val)
                {
                    prev=temp;
                    temp=temp->link;
                }
                if(temp == NULL)    //temp NULL means data not found in the list
                {
                    return -1;
                }
                int item=temp->data;
                prev->link=temp->link;
                delete temp;
                return item;
            }

};
int main()
{
    List l;
     do{
        int n,item;
        cout<<"1. push_back\n2. traverese\n3. delete_based_on_data\n5. exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the element to insert: ";
                   cin>>item;
                   l.push_back(item);
                   break;
            case 2:l.traverse();
                   break;
            case 3:int data;
                   cout<<"Enter the data to be delete: ";
                   cin>>data;
                   item=l.delete_based_on_data(data);
                   if(item==-1){cout<<data<<" not found..\n";}else{cout<<item<<" deleted...\n";};
                   break;
            case 4:exit(0);
            default:cout<<"Invalid choice...!\n";
        }
    }while(1);
    return 0;
}