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

int maxofTree(Node *root){
    if(root==NULL){
        return INT_MIN;
    }
    else
    return (max(root->key,max(maxofTree(root->left),maxofTree(root->right))));
}

int sizeOftree(Node *root){
    if(root== NULL){
        return 0;
    }
    else 
    return(1+ sizeOftree(root->left) + sizeOftree(root->right));
 }

void inOrder(Node *root){
    if(root!=NULL){
        inOrder(root->left);
        std::cout<<root->key<<" ";
        inOrder(root->right);
    }
}

void postOrder(Node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->key<<" ";
    }
}

void preOrder(Node *root){
    if(root!=NULL){
        std::cout<<root->key<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){

    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(60);
    root->right->right = new Node(80);

    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    cout<<sizeOftree(root);
    cout<<endl;
    cout<<maxofTree(root);
}