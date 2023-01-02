#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int size(Node *head)
{
    int count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
int main()
{
    Node *n1=new Node(4);
    Node *n2=new Node(12);
    Node *n3=new Node(7);
    
    Node *head=n1;
    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;
    print(head);
    cout<<size(head)<<endl;
    return 0;
    
}
