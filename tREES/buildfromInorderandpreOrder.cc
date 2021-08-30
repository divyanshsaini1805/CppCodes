#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

   
    int preIndex = 0;
   
//     int search(int arr[], int end, int value)
//    {
//     int i;
//     for (i = 0; i <= end; i++)
//     {
//         if (arr[i] == value)
//             return i;
//     }
//     return -1;
// }

// unordered_map<int,int> m;
// int idx=0;
// Node* buildTreep(int in[], int pre[], int inStrt, int inEnd)
// {
  
 
//     if (inStrt > inEnd)
//         return NULL;
 
//     /* Pick current node from Preorder
//     traversal using preIndex
//     and increment preIndex */
//     Node* tNode = new Node(pre[idx++]);
 
//     /* If this node has no children then return */
//     if (inStrt == inEnd)
//         return tNode;
 
//     /* Else find the index of this node in Inorder traversal */
//     int inIndex = search(in, inEnd, tNode->data);
 
//     /* Using index in Inorder traversal, construct left and
//     right subtress */
//     tNode->left = buildTreep(in, pre, inStrt, inIndex - 1);
//     tNode->right = buildTreep(in, pre, inIndex + 1, inEnd);
 
//     return tNode;
// }
    
    
//     Node* buildTree(int in[],int pre[], int n)
//     {
//         return buildTreep(in,pre,0,n-1);
//     }


int idx = 0;
unordered_map<int,int> m;


Node* solve(int in[],int *pre, int lb, int ub){

    if(ub<lb) return NULL;
    Node* curr = new Node(m[pre[idx++]]);
    if(ub==lb) return curr;
    int mid = m[curr->data];
    curr->left = solve(in, pre, lb, mid-1);
    curr->right = solve(in, pre, mid+1, ub);
    return curr;
    
}


Node* buildTreePostorder(int *in, int* pre, int n){
    idx = 0;
    m.clear();

    for(int i=0;i<n;i++) m[in[i++]]=i;
    Node * root = solve(in, pre, n-1, 0);
    return root;
} 



int main()
{


     int in[] = {1,6,8,7};
     int pre[] = {1,6,7,8};

     Node * root = buildTreePostorder(in,pre,3);
     printPostOrder(root);
}