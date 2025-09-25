#include<iostream>
using namespace std;
class Node
{
    public: int data;
            Node *link;
            Node(int val)
            {
                data=val;
            }
};
class stack
{
    private:Node *top;
    public: stack()
            {
                top=nullptr;
            }
            void push(int val)         //add at first
            {
                Node *newnode=new Node(val);
                    newnode->link=top;
                    top=newnode;
            }
            void traverse()
            {
                if(top==nullptr)
                {
                    cout<<"stack is emtpy...\n";
                }
                else
                {
                    Node *temp=top;
                    while(temp != nullptr)
                    {
                        cout<<temp->data<<"-->";
                        temp=temp->link;
                    }
                    cout<<"NULL"<<endl;
                }
            }
            int peek()
            {
                if(top==nullptr)
                {
                    return -1;
                }
                else
                {
                    return top->data;
                }
            }
            int pop()
            {
                if(top==NULL)
                {
                    return -1;
                }
                else
                {
                    int x;
                    Node *temp=top;
                    x=top->data;
                    top=top->link;
                    delete temp;
                    return x;
                }
            }

};
int main()
{
    stack s;
    do
    {
        int n,item;
        cout<<"1. push\n2. pop\n3. peek\n4. traverse\n5. exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the element to be insert: ";
                   cin>>item;
                   s.push(item);
                   break;
            case 2:item=s.pop();
                   (item==-1 ? cout<<"Stack is empty...\n":cout<<item<<" removed\n" );
                   break;
            case 3:item=s.peek();
                   (item==-1 ? cout<<"Stack is empty...\n":cout<<item<<" is at peek\n" );
                   break;
            case 4: s.traverse();
                    break;
            case 5:exit(0);
            default: cout<<"Invalid choice...!\n";
        }
    } while (1);
    return 0;  
}