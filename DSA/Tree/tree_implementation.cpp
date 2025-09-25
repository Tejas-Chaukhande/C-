#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public: int data;
            Node *left;
            Node *right;
            Node(int val)
            {
                data = val;
                left = right = NULL;
            }
};

//1,2,-1,-1,3,4,-1,-1,5,-1,-1
static int index = -1;
Node *buildTree(vector<int> preorder)
{
    index++;
    if(preorder[index] == -1)return NULL;
    Node *root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void PreorderTraversal(Node *root)    //root,left,right
{
    if(root==NULL)return;

    cout<<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
}
void InorderTraversal(Node *root)   //left, root , right
{
    if(root==NULL)return;
    InorderTraversal(root->left);
    cout<<root->data<<" ";
    InorderTraversal(root->right);

}
void PostorderTraversal(Node *root)
{
    if(root==NULL)return;

    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout<<root->data<<" ";
}
int main()
{
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node *root=buildTree(preorder);
    PreorderTraversal(root);
    cout<<endl;
    InorderTraversal(root);
    cout<<endl;
    PostorderTraversal(root);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;
    return 0;
}
