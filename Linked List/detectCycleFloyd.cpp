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

void printList(node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;   
        node = node->next;  
    }  
}


bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            return true;
        }
     }
return false;
}

void removeLoop(node* head)
    {
    struct node* slow;
    struct node* fast;
     
    slow = head;
    fast = head;
    
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
            if(slow==fast){
                break;
            }
    }
    
    if(slow==head){
        while(fast->next!=slow){
            fast=fast->next;
        }
    fast->next=NULL;
    }
    else
    if(slow==fast){
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
    fast->next=NULL;
    }    
    cout<<"Loop found on the element  "<<slow->data;
    cout<<endl;   
    }

node* kthcycle(node* head){
     node* slow;
    node* fast;
    node* temp;
     if (head == NULL || head->next == NULL)
        return NULL;
 
    slow = head;
    fast = head;
        
    slow = slow->next;
    fast = fast->next->next;
    
    while(fast && fast->next){
        if(slow==fast){
                break;
            }
        fast=fast->next->next;
        slow=slow->next;
            
    }
        if(slow!=fast){
            return NULL;
        }
    
     slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
 
    return slow;
 
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
    head = newNode(50);
    head->next = newNode(20);
    head->next->next = newNode(15);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(10);
    head->next->next->next->next->next = head ;  //makkng loop last to 2nd element

    
bool ans = detectCycle(head);
if(ans == true){
    cout<<"Cycle Detected";
}else{
    cout<<"NoCycle";
}
cout<<endl;
removeLoop(head);
ans=detectCycle(head);
if(ans == true){
    cout<<"Cycle Detected";
}else{
    cout<<"NoCycle";
}
// printList(head);
}