#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

Node *createNode(int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insertAtFront(Node **head_ref, int data)
{
    //time complexity of push is O(1)
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = (*head_ref);
    (*head_ref) = newNode;
}

void addNodeAfterGivenNode(Node **head_ref, Node *given_node_ref, int new_data)
{
    if(given_node_ref == NULL)
    {
        cout<<"Invalid node\n";
        return;
    }
    Node *new_node = createNode(new_data);
    
    
    new_node->next = given_node_ref->next;
    given_node_ref->next = new_node;
}

void addNodeAtEnd(Node **head_ref, int data)
{
    Node *newNode = createNode(data);
    Node *temp = *head_ref; //address of the head Node
    if(*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

void printLinkedList(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"-------------------\n";
}

int main()
{
    Node *head = new Node();
    head->data = 12;
    cout<<"########################\n";
    printLinkedList(head);
    cout<<"########################\n";
    insertAtFront(&head, 234);
    insertAtFront(&head, 23);
    insertAtFront(&head, 34);

    printLinkedList(head);
    Node *givenNode = head->next->next;

    addNodeAfterGivenNode(&head, givenNode, 69);
    printLinkedList(head);

    addNodeAtEnd(&head, 96);
    addNodeAtEnd(&head, 969);
    printLinkedList(head);




    return 0;
}