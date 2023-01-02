#include<iostream>
using namespace std;
#define Maxlen 100

typedef struct
{
    char element[Maxlen];
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

int main()
{
    char str[] = "aabc";
        count(str);
    return 0;
}


