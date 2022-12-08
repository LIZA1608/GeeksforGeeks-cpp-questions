/*https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1*/

//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
int findpos(int in[],int currelement,int n){
    for(int i=0;i<n;i++){
        if(in[i]==currelement){
            return i;
        }
    }
    return -1;
}
Node* solve(int in[],int post[],int &postorderindex,int inorderstart,int inorderend,int n){
    if(postorderindex<0 || inorderstart>inorderend){
        return NULL;
    }
    int currelement=post[postorderindex];
    postorderindex--;
    Node *root=new Node(currelement);
    int pos=findpos(in,currelement,n);
    root->right=solve(in,post,postorderindex,pos+1,inorderend,n);
    root->left=solve(in,post,postorderindex,inorderstart,pos-1,n);
    return root;
}
Node *buildTree(int in[], int post[], int n) {
int postorderindex=n-1;
Node* ans=solve(in,post,postorderindex,0,n-1,n);
return ans;
}
