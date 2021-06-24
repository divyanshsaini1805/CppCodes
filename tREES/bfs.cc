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

Node* buildTreePreOrder(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }

    Node *root = new Node(d);
    root->left=buildTreePreOrder();
    root->right=buildTreePreOrder();
    return root;
}

void printTreePreOrder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->key<<" ";
    printTreePreOrder(root->left);
    printTreePreOrder(root->right);
}

void bfs(Node*root){
    queue<Node*> q;

    q.push(root);

    while(q.empty()==false){
        Node * node1= q.front();
        cout<<node1->key<<" ";
        q.pop();

        if(node1->left!=NULL){
            q.push(node1->left);
        }
        if(node1->right!=NULL){
            q.push(node1->right);
        }
}
}

void bfs_levelwise(Node *root){
   queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.empty()==false){
        
        Node * node1= q.front();
        if(node1==NULL){
        cout<<endl;
         q.pop();
         if(q.empty()==false){
             q.push(NULL);
         }
         }
         else{      
        
        cout<<node1->key<<" ";
        q.pop();      
        
        if(node1->left!=NULL){
            q.push(node1->left);
        }
        if(node1->right!=NULL){
            q.push(node1->right);
        }
        }
        }
}



int main(){

    Node *root = buildTreePreOrder();
    int sum=0;
    // printTreePreOrder(root);

    
    bfs_levelwise(root);
    cout<<endl;
}
