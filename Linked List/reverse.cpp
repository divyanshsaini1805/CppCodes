#include<bits/stdc++.h>

struct node{

int data;
struct node *next;
};

struct node reverse(struct node **head){

struct node *N ;
struct node *P = NULL;
struct node *curr = *head;

while(curr!=NULL){
    N = curr->next;

    curr->next=P;

    P = curr;
    curr = N;
}



}

int main(){


 int *head=NULL;
    reverse(*head);
}