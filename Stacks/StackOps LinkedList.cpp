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
}*top;

void init()
{
    top=NULL;
}

void push(int value)
{
    Node *newNode=new Node(value);
    if(top==NULL)
    {
        newNode->next=NULL;
    }
    else
    {
        newNode->next=top;
        top=newNode;
    }
}

void pop()
{
    if(top==NULL)
        cout<<"Stack is Empty"<<endl;
    else
    {
        Node *temp=top;
        top=top->next;
        delete temp;
    }
}

void display()
{
    if(top==NULL)
        cout<<"Stack is Empty"<<endl;
    else
    {
        Node* temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    Node* top=NULL;
    init();
    push(5);
    push(6);
    push(12);
    push(9);
    push(4);
    push(2);
    
    display();
}
