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



void leftView(Node*root){
        if(root==NULL){
            return;
        }
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i=1;i<=n;i++){
            Node*temp = q.front();
            q.pop();

            if(i==1){
                cout<<temp->key<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            
        }
    }
}
void rightView(Node*root){
        if(root==NULL){
            return;
        }
    
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i=1;i<=n;i++){
            Node*temp = q.front();
            q.pop();

            if(i==n){
                cout<<temp->key<<" ";
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            
        }
    }
}


void leftviewRecursive(Node*root, int curr,bool *level){
    if(root==NULL){
        return;
    }
    if(level[curr]==false){
        level[curr]=true;
        cout<<root->key<<" ";
    }

    leftviewRecursive(root->left,curr+1,level);
    leftviewRecursive(root->right,curr+1,level);
    

}


void leftViewUtil(struct Node *root,
                int level, int *max_level)
{
    if (root == NULL) return;
 
    if (*max_level < level)
    {
        cout << root->key<< " ";
        *max_level = level;
    }
    leftViewUtil(root->left, level + 1, max_level);
    leftViewUtil(root->right, level + 1, max_level);
}


void topView(Node*root){
    if(!root) return;

    queue<pair<Node*,int>> q;
    map<int,int> m;

    q.push({root,0});
    while(!q.empty()){
        Node* temp = q.front().first;
        int h = q.front().second;
        q.pop();

        if(!m[h]) m[h] = temp->key;

        if(temp->left) q.push({temp->left,h-1}); 
        if(temp->right) q.push({temp->right,h+1}); 
    }
    for(auto x:m){
        cout<<x.second<<" ";
    }
    
}

void bottomView(Node* root){
    map<int,int> m;
    queue<pair<Node*,int> > q;

    q.push({root,0});
    while(!q.empty()){
        Node*temp=q.front().first;
        int h = q.front().second;
        q.pop();

        m[h] = temp->key;

        if(temp->left)q.push({temp->left,h-1});
        
        if(temp->right) q.push({temp->right,h+1});
    }
    for(auto x:m) cout<<x.second<<" ";
}

int main(){

    bool levels[202];
    Node *root = insertAtNode(root,50);
    Node *r = root;
    int max_level = 0;
     insertAtNode(root,40);
     insertAtNode(root,100);
     insertAtNode(root,20);
     insertAtNode(root,30);
     insertAtNode(root,35);

    leftView(root);
     cout<<endl;
    // leftviewRecursive(r,0,levels);
     cout<<endl;
    //  leftViewUtil(root,1,&max_level);
      cout<<endl;
      rightView(root);
      cout<<endl;
      topView(root);
      cout<<endl;
      bottomView(root);
      cout<<endl;
    
}