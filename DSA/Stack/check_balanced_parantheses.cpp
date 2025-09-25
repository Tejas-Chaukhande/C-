//check balanced parantheses
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
                top = nullptr;
            }
            void push(char ch)
            {
                Node *newnode = new Node(ch);
                if(top == nullptr)
                {
                    top=newnode;
                }
                else
                {
                    newnode->link = top;
                    top = newnode;
                }
            }
            void pop()
            {
                if(top == nullptr)
                {
                    cout<<"Stack is empty...!\n";
                }
                else
                {
                    if(top->link == NULL)
                    {
                        delete top;
                        top=nullptr;
                    }
                    else
                    {
                        Node *temp = top;
                        top=top->link;
                        delete temp;
                    }
                }
            }
            bool isBalanced(string exp) 
            {
                for (int i = 0; i < exp.length(); i++) 
                {
                    char ch = exp[i];

                    if (ch == '(' || ch == '[' || ch == '{') {
                        push(ch);
                    }
                    else if (ch == ')' || ch == ']' || ch == '}') {
                        // Stack empty before matching → not balanced
                        if (top == nullptr) return false;

                        char top_char = top->ch;
                        if ((ch == ')' && top_char == '(') ||
                            (ch == ']' && top_char == '[') ||
                            (ch == '}' && top_char == '{')) {
                            pop();
                        } 
                        else {
                            return false; // mismatch
                        }
                    }
                }
                return top == nullptr; // balanced if stack empty
            }

};
int main()
{
    Stack st;
    string exp;
    cout<<"Enter the expression: ";
    cin>>exp;
    if(st.isBalanced(exp))
    {
        cout<<"Balanced....!\n";
    }
    else
    {
        cout<<"Not Balanced...!\n";
    }
}