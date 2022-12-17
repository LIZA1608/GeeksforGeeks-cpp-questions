/*https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1?page=1&category[]=Tree&curated[]=1&sortBy=submissions*/



//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
  // Your code here
 
  if(root==NULL){
      return 0;
  }
  
  if(root->left==NULL && root->right==NULL){
      return 1;
  }
  
     return  countLeaves(root->left)+countLeaves(root->right);
}
