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



class BHPair{
    public:
    int height;
    bool isbalanced;
};

BHPair checkBalanced(Node*root){
    BHPair p;
    if(root==NULL){
        p.height=0;
        p.isbalanced=true;
        return p;
    }

    BHPair leftTree = checkBalanced(root->left);
    BHPair rightTree = checkBalanced(root->right);

    p.height = max(leftTree.height,rightTree.height);

    if(leftTree.isbalanced && rightTree.isbalanced && (abs(leftTree.height-rightTree.height))<=1){
        p.isbalanced = true;
    }
    else{
        p.isbalanced = false;
    }

    return p;
}

void bfs_levelwise(Node *root){
   queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.empty()==false){
        
        Node * node1= q.front();
        // cout<<node1<<"  ";
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
    bfs_levelwise(root);
    cout<<endl;
    BHPair p = checkBalanced(root);
    if(p.isbalanced==true){
        cout<<"Balanced";
    }
    else{
        cout<<"NOt A balanced tree";
    }
    
}
