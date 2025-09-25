#include<iostream>
using namespace std;
int cnt=0;
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
class DoublyLinkedList
{
    private: Node *head;
             Node *tail;
    public: DoublyLinkedList()
            {
                head=nullptr;
                tail=nullptr;
            }
            void insert_begin(int val)
            {
                Node *newnode=new Node(val);
                if(head== NULL && tail == NULL)
                {
                    head=newnode;
                    tail=newnode;
                }
                else
                {
                   newnode->link=head;
                   tail->prev=head;
                   head=newnode;
                }
                cnt++;
            }
            void traverse()
            {
                if(head== NULL && tail == NULL)
                {
                    cout<<"List is empty...\n";
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
            void insert_end(int val)
            {
                Node *newnode=new Node(val);
                if(head== NULL && tail==NULL)
                {
                    head=tail=newnode;
                }
                else{
                    Node *temp=head;
                    while(temp->link != NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=newnode;
                    newnode->prev=temp;
                    tail=newnode;
                }
                cnt++;
            }
            int insert_between(int val,int pos)
            {
                if(pos<=0 || pos>cnt+1)
                {
                    return -1;
                }
                Node *newnode=new Node(val);
                if(pos==1)
                {
                    insert_begin(val);
                    cnt++;
                    return 1;
                }
                else
                {
                    Node *temp=head;
                    for(int i=1;i<pos-1;i++)
                    {
                        temp=temp->link;
                    }
                    newnode->prev=temp;
                    newnode->link=temp->link;
                    temp->link=newnode;
                    cnt++;
                    return 1;
                }
            }
            int delete_begin()
            {
                if(head==NULL && tail==NULL)
                {
                    return -1;
                }
                int item;
                if(head==tail)
                {
                    item=head->data;
                    delete head;
                    head=NULL;
                    tail=NULL;
                    cnt--;
                    return item;
                }
                Node *temp=head;
                item=head->data;
                head=temp->link;
                head->prev=NULL;
                delete temp;
                cnt--;
                return item;
            }
            int delete_end()
            {
                if(head==NULL && tail==NULL)
                {
                    return -1;
                }
                int item;
                if(head==tail)  //if only one node is present
                {
                    item=head->data;
                    delete head;
                    head=tail=NULL;
                    cnt--;
                    return item;
                }
                Node *temp=head,*previous=NULL;
                while(temp->link != NULL)
                {
                    previous=temp;
                    temp=temp->link;
                }
                item=temp->data;
                previous->link=NULL;
                tail=previous;
                delete temp;
                cnt--;
                return item;
            }
            int delete_between(int pos) {
            if (pos <= 0 || pos > cnt) 
            {
                cout << "Invalid position...\n";
                return -1;
            }

            if (head == NULL) {
                cout << "List is empty...\n";
                return -1;
            }

            int item;

            if (pos == 1) {
                return delete_begin();  // reuse existing function
            }

            if (pos == cnt) {
                return delete_end();  // reuse existing function
            }

            Node* temp = head;

            // Traverse to the node at position
            for (int i = 1; i < pos; i++) {
                temp = temp->link;
            }

            item = temp->data;

            // Adjust pointers
            temp->prev->link = temp->link;
            if (temp->link != NULL) {
                temp->link->prev = temp->prev;
            }

            delete temp;
            cnt--;  // Decrease node count
            return item;
        }
            void begin()
            {
                cout<<head->data<<" is at begin\n";
            }
            void end()
            {
                cout<<tail->data<<" is at end\n";
            }
};
int main()
{
    DoublyLinkedList l;
    do
    {
        int n,item,pos,val;
        cout<<"1. add_begin\n2. add_end\n3. add_between\n4. delete_begin\n5. delete_end\n6. delete_between\n7. traverse\n8. exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the element to be insert: ";
                   cin>>val;
                   l.insert_begin(val);
                   break;
            case 2:cout<<"Enter the element to be insert: ";
                   cin>>val;
                   l.insert_end(val);
                   break;
            case 3:cout<<"Enter the element and position to be insert: ";
                   cin>>val>>pos;
                   item=l.insert_between(val,pos);
                   (item == -1 ? cout<<"Invalid position\n": cout<<val<<" is inserted at "<<pos<<endl);
                   break;
            case 4:item=l.delete_begin();
                   (item==-1 ? cout<<"List is empty...\n": cout<<item<<" is deleted...\n");
                   break;
            case 5:item=l.delete_end();
                  (item==-1 ? cout<<"List is empty...\n": cout<<item<<" is deleted...\n");
                  break;
            case 6:cout<<"Enter the position to delete: ";
                   cin>>pos;
                   item=l.delete_between(pos);
                   (item == -1? cout<<"list is empty...\n" : cout<<item<<" is delted...\n");
                   break;
            case 7:l.traverse();
                   break;
            case 8: exit(0);
            default: cout<<"Invalid choice...\n";
        }
    } while (1);
    
    return 0;
}