#include <iostream>
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
void print(Node *head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteEnd(Node* &head)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node *temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        
    }
}
int main()
{
    Node *n1=new Node(4);
    Node *n2=new Node(7);
    Node *n3=new Node(12);
    Node *head=n1;
    n1->next=n2;
    n2->next=n3;
    print(head);
    deleteEnd(head);
    print(head);
    return 0;
    
}
