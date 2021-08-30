#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;


    Node(int k){
    data = k;
    left=NULL;
    right=NULL;
        }
    Node(){
    data = 0;
    left=NULL;
    right=NULL;
        }

};

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

Node*build(){
  int d;
  cin>>d;
  Node*root1 = NULL;

  while(d!=-1){
      insertAtNode(root1,d);
      cin>>d;
  }
  return root1;
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
        
        cout<<node1->data<<" ";
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


void inOrder(Node *root){
    if(root!=NULL){
        inOrder(root->left);
        std::cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main(){

     Node *root = build();
    //  insertAtNode(root,40);
    //  insertAtNode(root,50);
    //  insertAtNode(root,20);
    //  insertAtNode(root,10);

    bfs_levelwise(root);
    cout<<endl;
    inOrder(root);
 


}

