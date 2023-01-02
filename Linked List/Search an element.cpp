#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

void Search(Node *head,int num)
{
    if(head==NULL)
        cout<<"Empty List"<<endl;
    
    Node *temp=head;
    while(temp!=NULL && temp->data!=num)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found"<<endl;
    }
}

int main()
{
    Node n1(5),n2(4);
    n1.next=&n2;
    Node *head=&n1;
    Node n3(7);
    n3.next=&n1;
    Search(head,12);
    
    return 0;
    
    
}

