#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node*right;

    Node(int data1){
        data = data1;
        left=NULL;
        right=NULL;
    }
};


void preorder(Node*root){
    stack<Node*> s;
    s.push(root);

    while(!s.empty()){
        Node* temp = s.top();
        s.pop();
        cout<<temp->data<<" ";

        if(temp->left){
            s.push(temp->left);
        }
        if(temp->right){
            s.push(temp->right);
        }
    }

}

Node*insertAtNode(Node*root,int value){
    if(root==NULL){
        return new Node(value);
    }

    if(value<=root->data){
        root->left= insertAtNode(root->left,value);
    }
    else{
        root->right=insertAtNode(root->right,value);
    }
    return root;
}

int main(){



 Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->left->left = new Node(70);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->left->left->right = new Node(80);

preorder(root);
}