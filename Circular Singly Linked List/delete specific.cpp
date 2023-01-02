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

void print(Node* &head)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node *temp=head;
        while(temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" "<<endl;
    }
}

void deleteS(Node* &head,int num)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node* temp1=head;
        Node* temp=NULL;
        while(temp1->next!=head && temp1->data!=num)
        {
            temp=temp1;
            temp1=temp1->next;
        }
        if(temp1==head)
            head=NULL;
        else
        {
            temp->next=temp1->next;
        }
        delete temp1;
        
        
    }
        
}
int main()
{
    Node *n1=new Node(4);
    Node *n2=new Node(10);
    Node *n3=new Node(9);
    
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=head;
    
    print(head);
    deleteS(head,10);
    print(head);
    return 0;
}
