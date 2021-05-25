#include<bits/stdc++.h>

using namespace std;

struct node{

int data;
struct node *next;
};


node* newNode(int key)
{
    node* temp = new node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}


node* insertBegin(node **head,int data1){
node *temp = new node();
temp->data = data1;
temp->next=*head;
*head = temp;

return *head;
}

void printList(node *head)  
{   node *curr=head;
    do   
     
    {  
        cout<<" "<<curr->data;   
        curr = curr->next;  
    } while(curr!=head); 
}
int main(){


 struct node *head=NULL;
 struct node *head1=NULL;
 struct node *head2=NULL;

 
    head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    head->next->next->next->next->next = head;  //makkng loop last to 2nd element

 printList(head);
}