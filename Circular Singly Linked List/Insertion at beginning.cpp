#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
void print(Node * &head)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node* temp=head;
        while(temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}


void insertBeg(Node *head,int num)
{
    Node *temp=new Node(num);
    if(head==NULL)
        temp->next=temp;
    else
    {
        temp->next=head;
        Node *temp1=head;
        
        while(temp1->next!=head)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        head=temp;
    }
}

int main()
{
    Node *n1=new Node(4);
    Node *n2=new Node(12);
    Node *n3=new Node(7);
    
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=head;
    print(head);
    insertBeg(head,3);
    print(head);
    return 0;
}

