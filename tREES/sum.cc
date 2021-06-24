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
void sumOfTreeLeaves(Node*root,int &sum){
    if(root==NULL)
    return;

    if(root->left==NULL&&root->right==NULL){
        sum+=root->key;
    }

    sumOfTreeLeaves(root->left,sum);
    sumOfTreeLeaves(root->right,sum);

}

int addBT(Node* root)
{
    if (root == NULL)
        return 0;
    return (root->key + addBT(root->left) + addBT(root->right));
}


int main(){

    Node *root = buildTreePreOrder();
    int sum=0;
   
    cout<<endl;
    sumOfTreeLeaves(root,sum);
    cout<<sum;
    cout<<endl;
    cout<<addBT(root);
}
