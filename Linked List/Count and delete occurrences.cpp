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

int count(Node *head,int key)
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            count++;
        }
        temp=temp->next;
    }
    return count;
}

void deleteKey(Node* &head,int key)
{
    Node *temp=head;
    Node*prev=NULL;
    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
        cout<<"element not found"<<endl;
    else if(temp==head)
    {
        head=head->next;
    }
    else if(temp->next==NULL)
    {
        prev->next=NULL;
    }
    else
    {
        prev->next=temp->next;
        delete temp;
    }
    
}
int main()
{
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(1);
    Node *n4=new Node(2);
    Node *n5=new Node(1);
    Node *n6=new Node(3);
    Node *n7=new Node(1);
    
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    
    int i;
    print(head);
    int c= count(head,1);
    cout<<c<<endl;
    for(i=0;i<c;i++)
    {
        deleteKey(head,1);
    }
    print(head);
    return 0;
    
    
    
}
