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
    private:Node *front;
            Node *rear;
    public:Queue()
           {
            front=NULL;
            rear=NULL;
           }
           void Insert(int val)
           {
               Node *newnode=new Node(val);
               if(front == NULL && rear == NULL)
               {
                front=rear=newnode;
               }
               else
               {
                rear->link=newnode;    //main logic
                rear=newnode;
               }
           }
           void Traverse()
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
                        cout<<temp->data<<" ";
                        temp=temp->link;
                    }
                    cout<<endl;
                }
           }
           int Delete()
           {
                if(front == NULL && rear == NULL)
                {
                    return -1;
                }
                else
                {
                    Node *temp=front;
                    int item=front->data;
                    front=front->link;
                    if (front == NULL) // If the queue becomes empty after deletion
                    {
                        rear = NULL;
                    }
                    delete temp;
                    return item;
                }
           }
           int GetFront()
           {
                if(front == NULL && rear == NULL)
                {
                    return -1;
                }
                return front->data;

           }
           int GetRear()
           {
                if(front == NULL && rear == NULL)
                {
                    return -1;
                }
                return rear->data;
           }
};
int main()
{
    Queue q;
    do
    {
        int n,item;
        cout<<"1. Insert\n2. Delete\n3. Traverse\n4. GetFront\n5. GetRear\n6. Exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the element to be insert: ";
                   cin>>item;
                   q.Insert(item);
                   break;
            case 2:item=q.Delete();
                   (item == -1 ? cout<<"Queue is Empty...\n" : cout<<item<<" is deleted...!\n");
                    break;
            case 3:q.Traverse();
                   break;
            case 4:item=q.GetFront();
                   (item == -1 ? cout<<"Queue is Empty...\n" : cout<<item<<" is at Front..!\n");
                   break;
            case 5:item=q.GetRear();
                   (item == -1 ? cout<<"Queue is Empty...\n" : cout<<item<<" is at Rear..!\n");
                   break;
            case 6:exit(0);
            default:cout<<"invalid choice...!\n";
        }
    }while(1);
    return 0;
}