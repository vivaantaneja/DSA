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

void print(Node *head)
{
    if(head==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        Node* temp=head;
        while(temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
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
    return 0;
}
