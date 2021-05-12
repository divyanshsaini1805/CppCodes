#include<bits/stdc++.h>

using namespace std;

struct node{

int data;
struct node *next;
};

struct node* reverse(struct node **head){

struct node *N ;
struct node *P = NULL;
struct node *curr = *head;

while(curr!=NULL){
    N = curr->next;

    curr->next=P;

    P = curr;
    curr = N;

}
*head = P;
return *head;
}
node* insertBegin(node **head,int data1){
node *temp = new node();
temp->data = data1;
temp->next=*head;
*head = temp;

return *head;
}

void printList(node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;   
        node = node->next;  
    }  
}



node *mergeSorted(node* head,node* head1){
    if(head==NULL){
        return head1;
    }
    if(head1==NULL){
        return head;
    }
    
node *head2=NULL; 
if(head1->data >= head->data){
    head2 = head;
    head2->next=mergeSorted(head->next,head1);
}
else{
    head2 = head1;
    head2->next=mergeSorted(head,head1->next);
}

printList(head2);
}

int main(){


 struct node *head=NULL;
 struct node *head1=NULL;
 struct node *head2=mergeSorted(head,head1);


 insertBegin(&head,40);
 insertBegin(&head,30);
 insertBegin(&head,20);
 insertBegin(&head,10);
 
 insertBegin(&head1,80);
 insertBegin(&head1,70);
 insertBegin(&head1,60);
 insertBegin(&head1,50);
 
//  printList(head);
//  cout<<endl;
    // reverse(&head);
//  printList(head1);
//  cout<<endl;
printList(head2);
mergeSorted(head,head1);
}