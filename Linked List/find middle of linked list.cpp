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

void middle(Node *head)
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    int mid;
    if(count%2!=0)
    {
       mid=(count+1)/2;
    }
    else
        mid=(count/2);
    
    Node*temp1=head;
    for(int i=1;i<mid;i++)
    {
        temp1=temp1->next;
    }
    cout<<temp1->data;
    cout<<endl;
}
int main()
{
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(3);
    Node *n4=new Node(4);
    Node *n5=new Node(5);
    Node *n6=new Node(6);
    Node *n7=new Node(7);
    
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    
    print(head);
    middle(head);
    return 0;
    
    
    
}

