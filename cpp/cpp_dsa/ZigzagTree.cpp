#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;

        Node(int data)
        {
            this->left = this->right = NULL;
            this->data = data;
        }
        Node()
        {

        }
};

Node *newNode(int data)
{
    Node* temp = new Node();
    temp->left=temp->right=NULL;
    temp->data = data;
    return temp;
};

void recursiveInOrder(Node *root)
{
    if(!root) return;
    recursiveInOrder(root->left);
    cout<<root->data<<" ";
    recursiveInOrder(root->right);
}

void recursivePreOrder(Node *root)
{
    if(!root) return;
    cout<<root->data<<" ";
    recursivePreOrder(root->left);
    recursivePreOrder(root->right);
}

void recursivePostOrder(Node *root)
{
    if(!root) return;
    recursivePostOrder(root->left);
    recursivePostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    recursiveInOrder(root);
    cout<<"InOrder\n";
    recursivePreOrder(root);
    cout<<"PreOrder\n";
    recursivePostOrder(root);
    cout<<"PostOrder\n";
    return 0;
}