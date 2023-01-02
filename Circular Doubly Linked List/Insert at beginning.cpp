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

void insertBeg(Node* &head,int num)
{
    Node *newNode=new Node(num);
    if(head==NULL)
        newNode->next=newNode->prev=newNode;
    else
    {
        /*while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
        
        newNode->next=head;
        head->prev=newNode;
         
        head=newNode;
         */
        newNode->next=head;
        newNode->prev=head->prev;
        
        head->prev=newNode;
        newNode->prev->next=newNode;
        
        head=newNode;
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
    insertBeg(head,21);
    print(head);
    return 0;
}
