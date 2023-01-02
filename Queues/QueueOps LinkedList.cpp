#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
}*front,*rear;

void init()
{
    front=NULL;
    rear=NULL;
}

void enqueue(int num)
{
    Node *newNode=new Node(num);
    if(front==NULL)
    {
        newNode->next=newNode;
        newNode->prev=newNode;
        front=rear=newNode;
    }
    else
    {
        newNode->prev=rear;
        rear->next=newNode;
        
        newNode->next=front;
        front->prev=newNode;
        
        rear=newNode;
    }
}

void dequeue()
{
    if(front==NULL)
        cout<<"Queue is empty"<<endl;
    else
    {
        Node *temp=front;
        if(front==rear)
        {
            front=rear=NULL;
        }
        else
        {
            //front->next->prev=front->prev;
            //front->prev->next=front->next;
            //front=front->next;
                
            rear->next=front->next;
            front=front->next;
            front->prev=rear;
                
                
            delete temp;
        }
    }
}

void print()
{
    Node*temp=front;
    if(front!=NULL)
    {
        while(temp!=rear)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
        cout<<endl;
    }
}

int main()
{
    init();
    enqueue(5);
    enqueue(7);
    enqueue(4);
    enqueue(9);
    enqueue(12);
    cout<<"Entered Queue"<<endl;
    print();
    cout<<"After Dequeue twice"<<endl;
    dequeue();
    dequeue();
    print();
    cout<<"After Dequeue once"<<endl;
    dequeue();
    print();
    
    return 0;
}


