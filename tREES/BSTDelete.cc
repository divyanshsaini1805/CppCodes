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



Node* deleteNode(Node*root,int data){
    if(root==NULL){
        return NULL;
    }else

    //CASE 1
    if(root->data>data){
        root->left = deleteNode(root->left,data);
        return root;
    }
    else if(data==root->data){
        //1. With no Children
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //2. with one children
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //3. With 2 children
        Node*replace = root->right;
        while(replace->left!=NULL){
            replace = replace->left;
        }
        root->data =replace->data;
        root->right = deleteNode(root->right,replace->data);
        return root;
    }
    else{
        root->right = deleteNode(root->right,data);
        return root;
    }

}

int main(){

     Node *root = insertAtNode(root,100);
     insertAtNode(root,40);
     insertAtNode(root,50);
     insertAtNode(root,20);
     insertAtNode(root,10);

    bfs_levelwise(root);
    cout<<endl;
    inOrder(root);

    deleteNode(root,40);
    cout<<endl;
    bfs_levelwise(root);


}

