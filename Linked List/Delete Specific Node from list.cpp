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
void deleteKey(Node *head,int key)
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
        head=head->next;
    else if(temp->next==NULL)
        prev->next=NULL;
    else
    {
        prev->next=temp->next;
        delete temp;
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
    deleteKey(head,7);
    print(head);
    return 0;
    
}
