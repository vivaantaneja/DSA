#include<iostream>
using namespace std;
#define n 100
int queue[n];
int front=-1,rear=-1;
void enqueue(int x){
    if (front==-1 &&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%n==front){
        cout<<"Queue is full";
    }
    else{
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}
void dequeue(){
    if (front==-1 && rear==-1)
    {
        cout<<"Underflow";
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front=(front+1)%n;
    }
    
}
void display(){
    int i=front;
    if (front==-1 && rear==-1)
    {
        cout<<"queue is empty";
    }
    else{
        while(i!=rear){
            cout<<queue[i]<<" ";
            i=(i+1)%n;
        }
        cout<<queue[rear]<<endl;
    }
   
}

int main()
{
    cout<<"Entered Queue"<<endl;
    enqueue(4);
    enqueue(7);
    enqueue(9);
    enqueue(1);
    enqueue(10);
    display();
    cout<<"After dequeue twice"<<endl;
    dequeue();
    dequeue();
    display();
}
