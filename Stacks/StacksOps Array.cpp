#include<iostream>
#define Maxlen 100
using namespace std;

class stack
{
public: 
    int element[Maxlen];
    int top;
};

stack init()
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

stack push(stack S,int num)
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

stack pop(stack S)
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
int main()
{
    stack S;
    S=init();
    S=push(S,10);
    S=push(S,7);
    S=push(S,9);
    S=push(S,1);
    S=push(S,3);
    S=push(S,6);
    
    cout<<"Entered Stack"<<endl;
    print(S);
    cout<<"Top is"<<endl;
    top(S);
    cout<<"After Pop twice"<<endl;
    S=pop(S);
    S=pop(S);
    print(S);
    cout<<"Top is"<<endl;
    top(S);
    return 0;
    
}
