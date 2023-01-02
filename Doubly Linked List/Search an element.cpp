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
};

void search(Node *head,int num)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node *temp=head;
        while(temp!=NULL && temp->data!=num)
        {
            temp=temp->next;
        }
        if(temp==NULL)
            cout<<"Element not present"<<endl;
        else
            cout<<"Element is present"<<endl;
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
    search(head,13);
    return 0;
    
}
