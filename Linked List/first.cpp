#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node *next;


    // node(int x){
    //     data=x;
    //     next=NULL;
    // }
};




int search(node *head, int x){

node *curr = head;
int pos = 1;

 while(curr!=NULL){
     if(curr->data==x){
         cout<<pos<<"\n";
         return 0;
     }else{
         pos++;
         curr = curr->next;
     }
 }
//  cout<<"position : "<<pos<<" ";
return -1;
}



void insert(node *head,int pos,int x){
    if(head==NULL){
        cout<<"Couldn't Insert";
    }
    node *temp = new node();
    node *curr= head;

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


void insert_end(node **head, int x){

node *temp = new node();

node *curr = *head;
while(curr->next!=NULL){
    curr = curr->next;
}

if(*head == NULL){
    *head=temp;
}
temp->data = x;
curr->next=temp;
temp->next= NULL;

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

struct node *N ;
struct node *P = NULL;
struct node *curr = head;

while(curr!=NULL){
    N = curr->next;

    curr->next=P;

    P = curr;
    curr = N;
}
head = P;

}
int main(){
 
node *head=NULL;


insert_begin(&head,30);
insert_begin(&head,20);
insert_begin(&head,10);
insert_end(&head,10);
insert_end(&head,100);
insert(head,3,100);
printList(head);

reverse(head);

//   cout<< push(head,10);
//   cout<< push(head,10);
//   cout<< push(head,10);
// insert(head,2,10);
// insert(head,3,10);
// insert(head,4,10);
// insert(head,5,10);
printList(head);

return 0;

}
