#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int key;
    Node *left;
    Node *right;


    Node(int k){
    key = k;
    left=NULL;
    right=NULL;
        }

};


void inOrder(Node *root){
    if(root!=NULL){
        inOrder(root->left);
        std::cout<<root->key<<" ";
        inOrder(root->right);
    }    
}    

Node* mirror(Node* root){
    if(root==NULL){
        return root;
    }

    Node* temp = root->right;
    root->right=root->left;
    root->left=temp;

    if(root->left){
        mirror(root->left);
    }
    if(root->right){
        mirror(root->right);
    }
    return root;
}
Node*insertAtNode(Node*root,int value){
    if(root==NULL){
        return new Node(value);
    }

    if(value<=root->key){
        root->left= insertAtNode(root->left,value);
    }
    else{
        root->right=insertAtNode(root->right,value);
    }
    return root;
}


int main(){


    Node *root = insertAtNode(root,100);
     insertAtNode(root,40);
     insertAtNode(root,50);
     insertAtNode(root,20);
     insertAtNode(root,10);
    
    inOrder(root);
    cout<<endl;
    Node* r2= mirror(root);
    inOrder(r2);
}