#include<iostream>
using namespace std;
class Node
{
    public: char ch;
            Node *link;
            Node(char ch)
            {
                this->ch = ch;
                link = nullptr;
            }
};
class Stack
{
    private: Node *top;
    public: Stack()
            {
                top=nullptr;
            }
            void push(char ch)
            {
                Node *newnode = new Node(ch);
                if(top == nullptr)
                {
                    top = newnode;
                }
                else
                {
                    newnode->link=top;
                    top=newnode;
                }
            }
            void pop()
            {
                if(top==NULL)
                {
                    cout<<"Stack is empty...!\n";
                }
                else if(top->link == NULL)
                {
                    delete top;
                    top=nullptr;
                }
                else
                {
                    Node *temp=top;
                    top=top->link;
                    delete temp;
                }
            }
            bool isBalanced(string exp)
            {
                char ch;
                for(int i=0;i<exp.length();i++)
                {
                    ch=exp[i];
                    if(ch=='(' || ch=='[' || ch=='{')
                    {
                        push(ch);
                    }
                    else if(ch==')' || ch==']' || ch=='}')
                    {
                        if(top == nullptr)
                        {
                            return false;
                        }

                        char top_char = top->ch;
                        if((ch==')' && top_char=='(') || (ch==']' && top_char=='[')||(ch=='}' && top_char=='{'))
                        {
                            pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                if(top==NULL)
                {
                    return true;
                }
                return false;
            }
};
int main()
{
    Stack st;
    string expression;
    cout<<"Enter the expression: ";
    cin>>expression;

    if(st.isBalanced(expression))
    {
        cout<<"Balanced...!\n";
    }
    else
    {
        cout<<"Not Balanced...!\n";
    }
    return 0;
}