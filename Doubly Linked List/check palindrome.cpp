#include <iostream>
using namespace std;
class Node
{
public:
    char data;
    Node *next;
    Node *prev;
    Node(char d)
    {
        data=d;
        next=NULL;
        prev=NULL;
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
    cout<<endl;
    
}

bool checkPalindrome(Node* &head)
{
    Node*start=head;
    Node*end=head;
    while(end->next!=NULL)
    {
        end=end->next;
    }
    while(start!=end)
    {
        if(start->data!=end->data)
            return false;
        else
        {
            start=start->next;
            end=end->prev;
        }
    }
    return true;
}

int main()
{
    Node *n1=new Node('a');
    Node *n2=new Node('b');
    Node *n3=new Node('a');
    
    Node *head=n1;
    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;
    print(head);
    if(checkPalindrome(head))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}

