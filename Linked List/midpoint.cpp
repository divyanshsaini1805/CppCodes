#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int midpoint(struct node *head)
{
 
 struct node *curr = new node();
 struct node *slow = new node();
 struct node *fast = new node();
 curr = head;
    int count;

 while(curr->next!=NULL){
     curr = curr->next;
     count++;
}
int n=0;
while(n<count/2){
    slow=slow->next;
}

return slow->data;
}
int main()
{

struct node *head = NULL;

midpoint(head);

return 0;
}