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

void deleteS(Node* &head,int value)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node *temp=head;
        while(temp->next!=head && temp->data!=value)
        {
            temp=temp->next;
        }
        if(temp->data!=value)
            cout<<"Element not found";
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            
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
    deleteS(head,12);
    print(head);
    return 0;
}

