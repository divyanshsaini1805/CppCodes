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

struct node *N = NULL ;
struct node *P = NULL;
struct node *curr = head;

}


int midpoint(struct node *head)
{
 
 struct node *curr = new node();
 struct node *slow = new node();
 struct node *fast = new node();
 
 curr = head;
 slow = head;
 fast = head->next;
    int count=0;

//  while(curr->next!=NULL){
//      curr = curr->next;
//      count++;
// }
// // cout<< count;
// int n=0;
// while(n<count/2){
//     slow=slow->next;
//     n++;
// }

while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
}
return slow->data;
}

void returnkthfromEnd(struct node *head,int k)
{
 struct node *slow = head;
 struct node *fast = head;
 struct node *curr = head;
 int count=0;
if(head!=NULL){
while(k>count){
    fast=fast->next;
    count++;
}
if(fast == NULL){
    head = head->next;
    if(head==NULL){
        cout<<"element  "<<k<<"from last is "<<fast->data;
    }
}else{
        while(fast!=NULL)
        {

            fast =fast->next;
            slow =slow->next;
        }
    }
        cout<<"element  "<<k<<"from last is "<<slow->data;

}}

struct node* kthReverse(struct node* head, int k){
    struct node *curr = new node();
    struct node *temp = new node();
    struct node *a = new node();
    struct node *b = new node();
    curr=head;
    temp=head;
    b=head;
    while(k>0){
        curr=curr->next;
        temp=temp->next;
        k--;
    }

    a=curr->next;
    curr->next=NULL;
    reverse(b);
    
return curr;
}

int main(){
 
node *head=NULL;
node *head1=NULL;



insert_begin(&head,30);
insert_begin(&head,20);
insert_begin(&head,10);
insert_end(&head,10);
insert_end(&head,100);
insert_end(&head,50);
insert(&head,3,54);
printList(head);
cout<<endl;
head1 = kthReverse(head,3);
printList(head1);
// reverse(head);

//   cout<< push(head,10);
//   cout<< push(head,10);
//   cout<< push(head,10);
// insert(head,2,10);
// insert(head,3,10);
// insert(head,4,10);
// insert(head,5,10);
// printList(head);
cout<<endl;
// cout<<midpoint(head);
// returnkthfromEnd(head,3);

return 0;

}
