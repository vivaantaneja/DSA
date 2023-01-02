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

int size(Node* head)
{
    int count=0;
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
        count++;
    }
    return count+1;
}
int main()
{
    Node *n1=new Node(4);
    Node *n2=new Node(10);
    Node *n3=new Node(9);
    Node *n4=new Node(0);
    
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=head;
    
    print(head);
    cout<<size(head)<<endl;
    return 0;
}
