#include<iostream>
using namespace std;
const int Max=5;
class Queue
{
    private: int entry[Max];
             int front,rear;
    public: Queue()
            {
                front=0;
                rear=0;
            }
            void Insert(int val)
            {
                if(rear == Max)
                {
                    cout<<"Queue is Full...!\n";
                }
                else
                {
                    entry[rear]=val;
                    rear++;
                }
            }
            void Traverse()
            {
                if(front == rear)
                {
                    cout<<"Queue is Empty...!\n";
                }
                else
                {
                    cout<<"Queue is: "<<endl;
                    for(int i=front;i<rear;i++)
                    {
                        cout<<entry[i]<<" ";
                    }
                    cout<<endl;
                }
            }
            int Delete()
            {
                if(front == rear)
                {
                    return -1;
                }
                else
                {
                    int item;
                    item=entry[front];
                    front++;
                    return item;
                }
            }
            int GetFront()
            {
                if(front == rear)
                    return -1;
                else
                {
                    return entry[front];
                }
            }
            int GetRear()
            {
                if(front == rear)
                    return -1;
                else
                {
                    return entry[rear-1];
                }
            }
            void ClearQueue()
            {
                front=0;
                rear=0;
            }
};
int main()
{
    Queue q;
    do
    {
        int n,item;
        cout<<"1. Insert\n2. Delete\n3. Traverse\n4. GetFront\n5. GetRear\n6. Clear Queue\n7. Exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the element to be insert: ";
                   cin>>item;
                   q.Insert(item);
                   break;
            case 2:item=q.Delete();
                   (item == -1 ? cout<<"Queue is Empty...!\n\n" : cout<<item<<" is deleted\n");
                   break;
            case 3:q.Traverse();
                   break;
            case 4:item=q.GetFront();
                   (item == -1 ? cout<<"Queue is Empty...!\n" : cout<<item<<" is at Front\n");
                   break;
            case 5:item=q.GetRear();
                   (item == -1 ? cout<<"Queue is Empty...!\n" : cout<<item<<" is at Rear\n");
                   break;
            case 6:q.ClearQueue();
                   break;
            case 7: exit(0);
            default: cout<<"Invalid choice...!\n";
        }
    }while(1);
    return 0;

}
