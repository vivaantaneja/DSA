#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *rchild;
    Node *lchild;
    Node(int d)
    {
        data=d;
        rchild=NULL;
        lchild=NULL;
    }
}*root=NULL;

void insert(int key)
{
    Node *t=root;
    Node *r=NULL;
    
    if(root==NULL)
    {
        Node *p = new Node(key);
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
            t=t->lchild;
        else if(key>t->data)
            t=t->rchild;
        else
            return;
    }
    Node *p=new Node(key);
    if(key<r->data)
        r->lchild=p;
    else
        r->rchild=p;
}
Node* RInsert(Node *p,int key)
{
    if(p==NULL)
    {
        Node *t=new Node(key);
        t->rchild=t->lchild=NULL;
        return t;
    }
    if(key<p->data)
        p->lchild=RInsert(p->lchild,key);
    else if(key>p->data)
        p->rchild=RInsert(p->rchild, key);
    
    return p;
    
}

int Height(Node *p)
{
    int x,y;
    if(p==NULL)
        return 0;
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}

Node* InPre(Node * &p)
{
    while(p!=NULL && p->lchild!=NULL)
    {
        p=p->lchild;
    }
    
    return p;
}

Node* InSucc(Node * &p)
{
    while(p!=NULL && p->rchild!=NULL)
    {
        p=p->rchild;
    }
    
    return p;
}
Node *Rdelete(Node* &p,int key)
{
    Node *q;
    if(p==NULL)
        return NULL;
    else if(p->rchild==NULL && p->lchild==NULL)
    {
        if(p==root)
            p=NULL;
        delete p;
        return NULL;
    }
    
    if(key<p->data)
        p->lchild=Rdelete(p->lchild, key);
    else if(key>p->data)
        p->rchild=Rdelete(p->rchild, key);
    else
    {
        if(Height(p->lchild)>Height(p->rchild))
        {
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=Rdelete(p->lchild, q->data);
        }
        else
        {
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=Rdelete(p->rchild, q->data);
        }
    }
    return p;
}
void inorder(Node *p)
{
    if(p)//(p!=NULL)
    {
        inorder(p->lchild);
        cout<<p->data<<" ";
        inorder(p->rchild);
    }
}

Node *search(int key)
{
    Node *t=root;
    
    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return NULL;
}
int main()
{
    root=RInsert(root,10);
    RInsert(root,5);
    RInsert(root,20);
    RInsert(root,8);
    RInsert(root,30);
    
    Rdelete(root, 20);
    inorder(root);
    cout<<endl;
    
    Node *temp=search(20);
    if(temp==NULL)
        cout<<"Element not found"<<endl;
    else
        cout<<temp->data<<" is present"<<endl;
    return 0;
}

