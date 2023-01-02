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

void Insertindex(Node* &head,int d,int num)
{
    Node *temp=new Node(d);
    temp->next=NULL;
    
    if(head==NULL)
        head=temp;
    else
    {
        Node *temp1=head;
        while(temp1!=NULL && temp1->data!=num)
        {
            temp1=temp1->next;
        }
        
        if(temp1==NULL)
            cout<<"Element not present"<<endl;
        else if(temp1->next==NULL)
            temp1->next=temp;
        else
        {
            temp->next=temp1->next;
            temp1->next=temp;
        }
        
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
    Insertindex(head, 2, 7);
    print(head);
    return 0;
    
}
