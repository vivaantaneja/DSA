#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
    Node()
    {
        next=NULL;
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

void reverse(Node* &head)
{
    Node* current=head;
    Node* prev=NULL;
    Node *next=NULL;
    
    while(current!=NULL)
    {
        next=current->next;
        
        current->next=prev;
        
        prev=current;
        current=next;
        
        head=prev;
    }
}
int main()
{
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(3);
    Node *n4=new Node(4);
    Node *n5=new Node(5);
    Node *n6=new Node(6);
    Node *n7=new Node(7);
    
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    
    print(head);
    reverse(head);
    print(head);
    return 0;
    
    
    
}

