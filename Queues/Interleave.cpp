#include<iostream>
using namespace std;
#define Maxlen 100

class stack
{
public:
    int element[Maxlen];
    int top;
};

stack inits()
{
    stack S;
    S.top=-1;
    return S;
}

bool isEmpty(stack S)
{
    if(S.top==-1)
        return true;
    else
        return false;
}

bool isFull(stack S)
{
    if(S.top==Maxlen-1)
        return true;
    else
        return false;
}

void top(stack S)
{
    if(isEmpty(S))
        cout<<"Empty stack"<<endl;
    else
        cout<<S.element[S.top]<<endl;
}

stack push(stack &S,int num)
{
    if(isFull(S))
        cout<<"Stack is full"<<endl;
    else
    {
        ++S.top;
        S.element[S.top]=num;
    }
    return S;
}

stack pop(stack &S)
{
    if(isEmpty(S))
        cout<<"Stack is Empty"<<endl;
    else
    {
        --S.top;
    }
    return S;
}

void print(stack S)
{
    for(int i=S.top;i>=0;i--)
    {
        cout<<S.element[i]<<" ";
    }
    cout<<endl;
}

typedef struct
{
    char element[Maxlen];
    int front,rear;
}queue;

queue initq()
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

queue enqueue(queue &Q,char num)
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

void count(char str[])
{
    queue Q;
    int hash[26]={0};
    
    for(int i=0;i<strlen(str);i++)
    {
        enqueue(Q, str[i]);
        
        hash[str[i]-'a']++;
    }
    while(!isEmpty(Q))
    {
        if(hash[Q.element[Q.front]-'a']>1)
            dequeue(Q);
        else
        {
            cout<<Q.element[Q.front]<<endl;
            break;
        }
    }
    if(isEmpty(Q))
        cout<<"Queue Empty"<<endl;
}

void interleave(queue &Q)
{
    if(size(Q)%2!=0)
        cout<<"Enter a even queue"<<endl;
    
    stack S;
    S=inits();
    int half_size=size(Q)/2;
    
    int i;
    //in stack from queue
    for(i=0;i<half_size;i++)
    {
        push(S,Q.element[Q.front]);
        dequeue(Q);
    }
    //in queue from stack
    while(!isEmpty(S))
    {
        enqueue(Q, S.element[S.top]);
        pop(S);
    }
    //enqueue again
    for(i=0;i<half_size;i++)
    {
        enqueue(Q, Q.element[Q.front]);
        dequeue(Q);
    }
    //in stack from queue
    for(i=0;i<half_size;i++)
    {
        push(S,Q.element[Q.front]);
        dequeue(Q);
    }
    //interleave
    while(!isEmpty(S))
    {
        enqueue(Q, S.element[S.top]);
        pop(S);
        enqueue(Q, Q.element[Q.front]);
        dequeue(Q);
    }
    
}

int main()
{
    queue Q;
    Q=initq();
    enqueue(Q,11);
    enqueue(Q,12);
    enqueue(Q,13);
    enqueue(Q,14);
    enqueue(Q,15);
    enqueue(Q,16);
    enqueue(Q,17);
    enqueue(Q,18);
    enqueue(Q,19);
    enqueue(Q,20);
    
    interleave(Q);
    print(Q);
}



