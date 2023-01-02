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
    Node()
    {
        next=NULL;
        prev=NULL;
    }
};

void print(Node *head)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

void deleteSpecific(Node* &head,int num)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node* temp=head;
        while(temp->next!=NULL && temp->data!=num)
        {
            temp=temp->next;
        }
        if(temp==head)
        {
            head=head->next;
            head->prev=NULL;
        }
        else if(temp->next==NULL)
        {
            temp->prev->next=NULL;
        }
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
        }
            
    }
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
    deleteSpecific(head, 4);
    print(head);
    return 0;
}


