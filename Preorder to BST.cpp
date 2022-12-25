
/*https://practice.geeksforgeeks.org/problems/preorder-to-postorder4423/1*/


class Solution{
public:
   Node* solve(int pre[],int mini,int maxi,int &i,int size){
       if(i>=size){
           return NULL;
       }
       if(pre[i]<mini || pre[i]>maxi){
           return NULL;
       }
       Node* root=newNode(pre[i]);
       i++;
       root->left=solve(pre,mini,root->data,i,size);
       root->right=solve(pre,root->data,maxi,i,size);
       return root;
   }
    Node* post_order(int pre[], int size)
    {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int i=0;
        return solve(pre,mini,maxi,i,size);
        
        
    }
};
