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

void search(Node *head,int num)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    else
    {
        Node* temp=head;
        while(temp->next!=head && temp->data!=num)
        {
            temp=temp->next;
        }
        if(temp->data==num)
            cout<<"Element present"<<endl;
        else
            cout<<"Elemenet not present"<<endl;
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
    search(head,3);
    return 0;
}
