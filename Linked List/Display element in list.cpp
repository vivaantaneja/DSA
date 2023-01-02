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
};

void print(Node *head)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main()
{
    Node n1(4),n2(7),n3(12);
    Node *head=&n1;
    n1.next=&n2;
    n2.next=&n3;
    print(head);
    
}
