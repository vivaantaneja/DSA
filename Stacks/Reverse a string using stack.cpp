#include<iostream>
#include<string.h>
using namespace std;
#define Maxlen 100

class stack
{
public:
    char element[Maxlen];
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

char top(stack S)
{
    return S.element[S.top];
}

stack push(stack &S,char num)
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

int main()
{
    string str="data structure";
    
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    int len=count;
    stack S;
    init();
    
    int i;
    for(i=0;i<len;i++)
    {
        push(S,str[i]);
    }
    
    for(i=0;i<len;i++)
    {
        str[i]=top(S);
        pop(S);
    }
    cout<<"Reverse string : "<<str<<endl;
    
}


