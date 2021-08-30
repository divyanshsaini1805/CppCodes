#include<bits/stdc++.h>

using namespace std;

struct node{

int data;
struct node *next;
};

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

node* midpoint(struct node *head)
{
 
 struct node *curr = new node();
 struct node *slow = new node();
 struct node *fast = new node();
 
 curr = head;
 slow = head;
 fast = head->next;
    int count=0;

while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
}
return slow;
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
return(head2);
}
node *mergeSort(node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node *a= NULL;
    node *b= NULL;
    node *c= NULL;
    node* mid = midpoint(head);
    a = head;
    b=mid->next;
    mid->next=NULL;

    a = mergeSort(a);
    b = mergeSort(b);
    c = mergeSorted(a,b);
    return c;
}

int getDecimalValue(node* head) {
            
        int n=0;
        int sum=0;
        node* curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
            n++;
        }
        curr=head;        
        while(n>=0){
            sum+=((curr->data)*pow(2,n));
            n--;
            curr=curr->next;
        }
    return sum;
    }

int main(){


 struct node *head=NULL;
 struct node *head1=NULL;
 struct node *head2=NULL;


//  insertBegin(&head,40);
//  insertBegin(&head,30);
//  insertBegin(&head,60);
//  insertBegin(&head,50);
//  insertBegin(&head,20);
//  insertBegin(&head,80);
//  insertBegin(&head,70);
//  insertBegin(&head,10);
insertBegin(&head,1);
insertBegin(&head,0);
 
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
insertBegin(&head,1);
 

printList(head);
 cout<<endl;
 cout<<getDecimalValue(head);
 cout<<endl;

// head2 = mergeSort(head);
// printList(head2);
}