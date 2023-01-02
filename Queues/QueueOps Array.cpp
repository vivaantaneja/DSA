#include<iostream>
using namespace std;
#define Maxlen 100

typedef struct
{
    int element[Maxlen];
    int front,rear;
}queue;

queue init()
{
    queue Q;
    Q.front=Q.rear=-1;
    return Q;
}

int size(queue &Q)
{
    return (Q.rear-Q.front+1);
}

bool isEmpty(queue &Q)
{
    if(Q.front==-1 || Q.front>Q.rear)
        return true;
    else
        return false;
}

bool isFull(queue &Q)
{
    if(Q.rear==Maxlen-1)
        return true;
    else
        return false;
}

void front(queue &Q)
{
    if(isEmpty(Q))
        cout<<"Queue is empty"<<endl;
    else
        cout<<Q.element[Q.front]<<endl;
}

queue enqueue(queue &Q,int num)
{
    if(isFull(Q))
        cout<<"Queue is full"<<endl;
    else if(isEmpty(Q))
    {
        Q.front=Q.rear=0;
        Q.element[Q.rear]=num;
    }
    else
    {
        ++Q.rear;
        Q.element[Q.rear]=num;
    }
    return Q;
}

queue dequeue(queue &Q)
{
    if(isEmpty(Q))
        cout<<"Stack is empty"<<endl;
    else
    {
        ++Q.front;
    }
    return Q;
}

void print(queue &Q)
{
    int i;
    for(i=Q.front;i<=Q.rear;i++)
    {
        cout<<Q.element[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    queue Q;
    Q=init();
    Q=enqueue(Q,7);
    Q=enqueue(Q,6);
    Q=enqueue(Q,3);
    Q=enqueue(Q,2);
    Q=enqueue(Q,8);
    Q=enqueue(Q,10);
    cout<<"Entered Queue"<<endl;
    print(Q);
    cout<<"Front Element"<<endl;
    front(Q);
    
    cout<<"After Dequeue twice"<<endl;
    dequeue(Q);
    dequeue(Q);
    print(Q);
    cout<<"Front Element"<<endl;
    front(Q);
    return 0;
    
}

