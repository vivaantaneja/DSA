#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){

        this->data = data;
        this->next = NULL;
    }
};

void insertAtEnd(node* &head,int num)
{
    node *temp=new node(num);
    temp->next=NULL;
    
    node *temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}

void print(node *head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);
    insertAtEnd(head,11);
    print(head);
}
