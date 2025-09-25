#include<iostream>
using namespace std;
class Node
{
    public: char ch;
            Node *link;
            Node(char ch)
            {
                this->ch = ch;
                link = NULL;
            }   
};
class Stack
{
    private: Node *top;
    public: Stack()
            {
                top = NULL;
            }
            void push(char ch)
            {
                Node *newnode = new Node(ch);
                if(top == NULL)
                {
                    top = newnode;
                }
                else
                {
                    newnode->link = top;
                    top = newnode;
                }
            }
            void pop()
            {
                if(top == NULL)
                {
                    cout<<"Stack is Empty...!\n";
                }
                else
                {
                    if(top->link == NULL)
                    {
                        delete top;
                        top= NULL;
                    }
                    else
                    {
                        Node *temp = top;
                        top = top->link;
                        delete temp;
                    }
                }
            }
            bool isBalanced(string exp)
            {
                for(int i=0;i<exp.length();i++)
                {
                    if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
                    {
                        push(exp[i]);
                    }
                    else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
                    {
                        if(top == NULL){return false;}
                        if((exp[i]==')' && top->ch=='(') ||
                           (exp[i]==']' && top->ch=='[') || 
                           (exp[i]=='}' && top->ch=='{'))
                        {
                            pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
                if(top==NULL){return true;}
                else{return false;}
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
        cout<<"Balanced...!";
    }
    else
    {
        cout<<"Not Balanced...!";
    }
    return 0;
}