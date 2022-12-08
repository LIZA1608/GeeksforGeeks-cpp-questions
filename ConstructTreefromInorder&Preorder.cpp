/*https://practice.geeksforgeeks.org/problems/construct-tree-1/1*/

//{ Driver Code Starts
//

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

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int findPos(int in[],int element,int n){
        for(int i=0;i<n;i++){
            if(in[i]==element){
                return i;
            }
        }
        return -1;
    }
    Node *solve(int in[],int pre[],int &preorderindex,int inorderstart,int inorderend,int size){
        if(inorderend>=size || inorderstart> inorderend){
            return NULL;
        }
        int currelement=pre[preorderindex];
        preorderindex++;
        Node* root=new Node(currelement);
        int position=findPos(in,currelement,size);
        
        root->left=solve(in,pre,preorderindex,inorderstart,position-1,size);
        root->right=solve(in,pre,preorderindex,position+1,inorderend,size);
          return root;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {

        int preorderindex=0;
      Node* ans=  solve(in,pre,preorderindex,0,n-1,n);
      return  ans;
    }
};
