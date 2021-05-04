#include<bits/stdc++.h>

using namespace std;

struct node{
  int data;
  node *next;
};


void display(node *head){

    while(head != NULL){
        cout<<" "<<head->data;
        head=head->next;
    }
}

void insert_begin(node *head , int x){

node *temp = new node();

temp->data = x;
temp->next = head;
head = temp;


}

int main(){





}