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

void insert(Node* &head,int num,int value)
{
    Node *temp=new Node(num);
    if(head==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        Node *temp1=head;
        while(temp1->next!=NULL && temp1->data!=value)
        {
            temp1=temp1->next;
        }
        if(temp1==NULL)
            cout<<"Element not present"<<endl;
        else if(temp1->next==NULL)
        {
            temp1->next=temp;
            temp->prev=temp1;
        }
        else
        {
            temp->prev=temp1;
            temp->next=temp1->next;
            temp1->next=temp;
            temp1->next->prev=temp;
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
    insert(head,9,12);
    print(head);
    return 0;
}

