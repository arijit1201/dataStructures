#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

int getNthNode(Node *head, int n)
{
    int count = 0;
    if(head == NULL){
        cout<<"LL is empty"<<" ";
        return INT_MIN;
    }
    for(int i=0; i<n; i++)
    {
        head = head->next;
    }
    return head->data;
        

}

int main()
{
    //1 10 30 14  ||  for index 2 ===> 30
    Node *head = new Node(1);
    head->next = new Node(10);
    head->next->next = new Node(30);
    head->next->next->next = new Node(14);

    cout<<getNthNode(head, 2)<<"\n";
    return 0;

}