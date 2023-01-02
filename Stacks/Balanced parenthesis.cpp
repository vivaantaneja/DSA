#include<iostream>
using namespace std;
#define Maxlen 100

class stack
{
public:
    char element[Maxlen];
    int top;
};

void init(stack S)
{
    S.top=-1;
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
bool checkP(string &s)
{
    stack S;
    init(S);
    for(int i=0;i<s.length();i++)
    {
        if(isEmpty(S))
        {
            S=push(S,s[i]);
        }
        else if((S.element[S.top]=='(' && s[i]==')') || (S.element[S.top]=='[' && s[i]==']') || (S.element[S.top]=='{' && s[i]=='}'))
        {
            S=pop(S);
        }
        else
        {
            S=push(S,s[i]);
            
        }
    }
    if(isEmpty(S))
        return true;
    else
        return false;
}

int main()
{
    string expr = "{()}[]";
    if(checkP(expr))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
    
    return 0;
    
}
