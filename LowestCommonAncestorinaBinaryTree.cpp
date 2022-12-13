/*https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(){
        data = 0;
        left = right = NULL;
    }
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// } Driver Code Ends
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       Node *leftans=lca(root->left,n1,n2);
       Node *rightans=lca(root->right,n1,n2);
       if(leftans!=NULL && rightans!=NULL){
           return root;
       }
       else if(leftans!=NULL && rightans==NULL){
           return leftans;
       }
       else if(leftans==NULL && rightans!=NULL){
           return rightans;
       }
       else {
           return NULL;
       }
    }
};
