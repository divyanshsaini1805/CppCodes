
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


vector<int> reverseLevelOrder(Node *node)
{
        
      queue<Node*> q;
      stack<Node*> s;
      vector<int> z;
      q.push(node);
      Node* r;
      
      if(node==NULL) return z;
      
      while(q.empty()==false){
          Node* temp = q.front();
          s.push(temp);
          q.pop();
          
          
          if(temp->right!=NULL){
              q.push(temp->right);
          }
          if(temp->left!=NULL){
              q.push(temp->left);
          }
          
          while(!s.empty()){
              r = s.top();
              z.push_back(r->data);
              s.pop();
          }
          
        }
        reverse(z.begin(),z.end());
        return z;
    
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

int main(){

     Node *root = insertAtNode(root,100);
     insertAtNode(root,40);
     insertAtNode(root,50);
     insertAtNode(root,20);
     insertAtNode(root,10);
    
     vector<int> val = reverseLevelOrder(root);
    
     bfs_levelwise(root);
    for(int i = 0;i<val.size();i++){
        cout<<val[i]<<" ";
    }
     cout<<endl;
     bfs_levelwise(root);
    

}
