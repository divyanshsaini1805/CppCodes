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


void inOrder(Node *root){
    if(root!=NULL){
        inOrder(root->left);
        std::cout<<root->key<<" ";
        inOrder(root->right);
    }    
}    

void inOrder_iterative(Node*root){
     stack<Node*> s;
     Node* temp = root;

     while(!s.empty() || temp!=NULL){
         if( temp != NULL){
             s.push(temp);
             temp= temp->left;
         }
         else{
                temp = s.top();
                s.pop();
                cout<< temp->key<<" ";
                temp = temp->right;
         }
     }
}

void preOrder_iterative(Node*root){
    if (root == nullptr)
    return;
    Node*temp=root;

    stack<Node*> s;
    s.push(root);

    while(!s.empty() || temp){

        if(temp!= NULL){
            temp=s.top();
            cout<<temp->key<<" ";
            s.push(temp);
            temp=temp->left;
        }else{
            
            s.pop();
            temp=temp->right;
        }

    }
}

void preorderIterative(Node* root)
{
    // return if the tree is empty
    if (root == nullptr)
    return;
 
    // create an empty stack and push the root node
    stack<Node*> stack;
    stack.push(root);
 
    // loop till stack is empty
    while (!stack.empty())
    {
        // pop a node from the stack and print it
        Node* curr = stack.top();
        stack.pop();
 
        cout << curr->key << " ";
 
        // push the right child of the popped node into the stack
        if (curr->right) {
            stack.push(curr->right);
        }
 
        // push the left child of the popped node into the stack
        if (curr->left) {
            stack.push(curr->left);
        }
 
        // the right child must be pushed first so that the left child
        // is processed first (LIFO order)
    }
}

void iterative_PostOrder(Node*root){
    if(root==NULL){
        return;
    }

    stack<Node*> s;
    stack<Node*> t;
    s.push(root);

    while(!s.empty()){
        Node* temp=s.top();
        t.push(temp);
        s.pop();

        if(root->left){
            s.push(root->left);
        }
        if(root->right){
            s.push(root->right);
        }
    }
        while(!t.empty()){
            Node* temp = t.top();
            cout<<temp->key;
            t.pop();
        }
    

}

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



int main(){


    Node *root = insertAtNode(root,100);
     insertAtNode(root,40);
     insertAtNode(root,50);
     insertAtNode(root,20);
     insertAtNode(root,10);

     inOrder(root);
     cout<<endl;
     inOrder_iterative(root);
     cout<<endl;
     preorderIterative(root);
     cout<<endl;
     preOrder_iterative(root);
     cout<<endl;
     iterative_PostOrder(root);
    
}