/*https://practice.geeksforgeeks.org/problems/inorder-traversal/1*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// } Driver Code Ends
/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    vector<int> res;
    vector<int> inOrder(Node* root) {
        // Your code here
        if(root){
               
            inOrder(root->left);
             res.push_back(root->data);
            inOrder(root->right);
        
        }
        return res;
    }
};
