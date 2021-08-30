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


void diagonalTranversal(Node*root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        while(temp){
            if(temp->left) q.push(temp->left);
            cout<<temp->key<<" ";
            temp=temp->right;
        }
    }


}

int main(){


    Node *root = insertAtNode(root,100);
     insertAtNode(root,40);
     insertAtNode(root,50);
     insertAtNode(root,20);
     insertAtNode(root,10);

    diagonalTranversal(root);
}