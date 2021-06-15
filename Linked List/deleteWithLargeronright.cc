#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;
};


void insert(node **head,int pos,int x){
    if(head==NULL){
        cout<<"Couldn't Insert";
    }
    node *temp = new node();
    node *curr= *head;

for (int i = 0; i < pos-2; i++)
{
    curr=curr->next;

}
temp->data=x;
temp->next=curr->next;
curr->next=temp;

}


void insert_begin(node **head, int x){
node *temp = new node(); 
temp->data=x;
temp->next=*head;
*head=temp;
}


void printList(node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;   
        node = node->next;  
    }  
}
void reverse(struct node *&head){

struct node *N = NULL ;
struct node *P = NULL;
struct node *curr = head;

}




int main(){
 
node *head=NULL;
node *head1=NULL;



insert_begin(&head,30);
insert_begin(&head,20);
insert_begin(&head,10);
printList(head);
cout<<endl;

return 0;

}
