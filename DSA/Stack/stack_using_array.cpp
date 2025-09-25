#include<iostream>
using namespace std;
const int MAX=5;
class Stack
{
    private: int entry[MAX];
             int top;
    public: Stack()
            {
                top = -1;
            }
            void  push(int item)
            {
                if(top==MAX-1)
                {
                    printf("Stack is full...!\n");
                }
                else{
                    ++top;
                    entry[top]=item;
                }
            }
            int pop()
            {
                if(top==-1)
                {
                    return -1;
                }
                int item=entry[top];
                --top;
                return item;

            }
            int peek()
            {
                if(top==-1)
                    return -1;
                else
                    return entry[top];

            }
            void traverse()
            {
                if(top==-1)
                    printf("Stack is Empty...!\n");
                else
                    printf("Elements in Stack:\n");
                    for(int i=top;i>=0;i--)
                    {
                        printf("%d ",entry[i]);
                    }
                    printf("\n---------------------------\n");

            }
};
int main()
{
    Stack s;
    do
    {
        int n,item;
        cout<<"1. push\n2. pop\n3. peek\n4. traverse\n5. exit\n";
        cout<<"Enter the choice: ";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"Enter the item to push: ";
                   cin>>item;
                   s.push(item);
                   break;
            case 2:item=s.pop();
                   if(item==-1)
                   {
                      cout<<"Stack is Empty...!\n";
                   }
                   else
                      cout<<item<<" removed"<<endl;
                   break;
            case 3:item=s.peek();
                   if(item==-1)
                      cout<<"Stack is Empty...!\n";
                   else
                      cout<<item<<" is at peek\n";
                   break;
            case 4:s.traverse();
                   break;
            case 5:exit(0);
        }
    } while (1);
    
}
