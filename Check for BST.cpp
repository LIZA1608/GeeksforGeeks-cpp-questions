/*https://practice.geeksforgeeks.org/problems/check-for-bst/1*/


class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool check(Node* root,int min,int max){
        if(root==NULL){
            return true;
        }
        if(root->data>=min && root->data<=max){
            bool left=check(root->left,min,root->data);
            bool right=check(root->right,root->data,max);
            return left&&right;
        }
        return false;
    }
    bool isBST(Node* root) 
    {
      return check(root,INT_MIN,INT_MAX);
    }
};
