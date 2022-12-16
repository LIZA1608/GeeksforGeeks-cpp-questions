
/*https://practice.geeksforgeeks.org/problems/postorder-traversal/1*/

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.

   

vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>ans;
  if(root==0){
        return ans;
    }
    postOrder(root->left);
    postOrder(root->right);
cout<<root->data<<" ";
    return ans;
}
