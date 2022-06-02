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

bool isMirror(Node *leftTree, Node *rightTree)
{
    if(leftTree==NULL && rightTree==NULL) return true;
    if(leftTree && rightTree && leftTree->data == rightTree->data)
        return isMirror(leftTree->left, rightTree->right) && isMirror(leftTree->right, rightTree->left);
    return false;
}

bool isSymmetric(Node *root)
{
    return isMirror(root, root);
}

int main()
{
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);
    string result = isSymmetric(root)?"Symmetric\n":"Not Symmetric\n";
    cout<<result;
    return 0;
}