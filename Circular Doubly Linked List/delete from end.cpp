#include<iostream>
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

void print(Node* &head)
{
    Node *temp=head;
    
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<endl;
}

void deleteEnd(Node* &head)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node*temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        if(temp==NULL)
            head=NULL;
        else
        {
            temp->prev->next=head;
            head->prev=temp->prev;
            
            delete temp;
        }
    }
}

int main()
{
    Node *n1=new Node(4);
    Node *n2=new Node(12);
    Node *n3=new Node(10);
    
    Node *head=n1;
    //n1
    n1->next=n2;
    n1->prev=n3;
    //n2
    n2->next=n3;
    n2->prev=n1;
    //n3
    n3->prev=n2;
    n3->next=n1;
    
    print(head);
    deleteEnd(head);
    print(head);
    return 0;
}
