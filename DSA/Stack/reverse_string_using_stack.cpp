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
            void display()
            {
                if(top == NULL)
                {
                    cout<<"Stack is empty...!\n";
                }
                else
                {
                    Node *temp=top;
                    while(temp)
                    {
                        cout<<temp->ch;
                        temp=temp->link;
                    }
                    cout<<endl;
                }
            }
};
int main()
{
    Stack st;
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    st.display();
    return 0;
}