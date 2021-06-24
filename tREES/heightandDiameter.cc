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

int height(Node*root){
    if(root==NULL){
        return 0;
    }
    else{
    int  lheight = height(root->left); 
    int  rheight = height(root->right); 

    if(lheight>rheight){
        return(lheight+1);
    }
    else{
        return(rheight+1);
    }
    }
}

int diametre(Node*root){
    if(root==NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int op1 = lheight+rheight;
    int op2 = diametre(root->left); 
    int op3 = diametre(root->right); 

    return(max(op1,max(op2,op3)));
}

class heightPair{
    public:
    int height;
    int diameter;
};

heightPair diameterFast(Node*root){
    heightPair p;
    if(root==NULL){
        p.height=0; p.diameter=0;
        return p;
    }

    heightPair left = diameterFast(root->left);
    heightPair right = diameterFast(root->right);

    p.height=max(left.height,right.height)+1;
    p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
    return p;
}




int main(){

    Node *root = buildTreePreOrder();
    heightPair p = diameterFast(root);
    int sum=0;
    // cout<<height(root);
    cout<<endl;
    // cout<<diametre(root);
    cout<<endl;
    cout<<p.diameter;
    cout<<endl;
}
