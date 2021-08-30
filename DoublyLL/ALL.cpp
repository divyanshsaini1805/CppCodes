#include<bits/stdc++.h>

using namespace std;

struct node{

int data;
struct node *next;
struct node *prev;
};


node* newNode(int key)
{
    node* temp = new node;
    temp->data = key;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void printList(node* head1)
{
    node* last=NULL;
    node* head = head1;
    cout<<"\nTraversal in forward direction \n";
    while (head != NULL)
    {
        cout<<" "<<head->data<<" ";
        last = head;
        head = head->next;
    }
 
    cout<<"\nTraversal in reverse direction \n";
    while (last != NULL)
    {
        cout<<" "<<last->data<<" ";
        head = last;
        last = last->prev;
    }
}


struct node *insertBegin(struct node **head,int data1){
struct node *temp=new node();

temp->data=data1;
temp->next=*head;

temp->prev=NULL;
// *head = temp;
if((*head)!=NULL){
    (*head)->prev=temp;
}
*head = temp;
return *head;
}


struct node* insertEnd(struct node*head, int data){
    node* curr=head;
    node* temp=new node;

    if(head == NULL){
    head=temp;
}
    temp->data=data;
    
    while(curr->next!=NULL){
        curr=curr->next;
    }


    curr->next=temp;
    temp->prev=curr;
    temp->next=NULL;
    
    return head;

}


struct node* Dreverse(struct node *head){

struct node *curr=head;
struct node *temp=NULL;

if(head==NULL || head->next==NULL){
    return head;
}
while(curr!=NULL){
    
    temp=curr->prev;
    curr->prev=curr->next;
    curr->next=temp;
    curr=curr->prev;
}
if(temp!=NULL){
head=temp;
}
// return head;
 return temp; 
}

int main(){


 struct node *head=NULL;
 struct node *head1=NULL;
 struct node *head2=NULL;


 insertBegin(&head,40);
 insertBegin(&head,30);
 insertBegin(&head,60);
 insertBegin(&head,50);
 insertEnd(head,100);
 printList(head);
 cout<<endl;
 head1=Dreverse(head);
 printList(head1);
}