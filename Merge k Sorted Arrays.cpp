/*https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

class node{
    public:
    int data;
    int i;
    int j;
    node(int data,int b,int c){
        this->data=data;
        i=b;
        j=c;
    }
};
class compare{
    public:
    bool operator()(node* a ,node* b){
    return a->data>b->data;
}
    };
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
          priority_queue<node*,vector<node*>,compare>mini;
          for(int i=0;i<K;i++){
              node *temp=new node(arr[i][0],i,0);
              mini.push(temp);
              }
              vector<int>ans;
              while(mini.size()>0){
                  node*temp=mini.top();
                  ans.push_back(temp->data);
                  mini.pop();
                  int i=temp->i;
                  int j=temp->j;
                  if(j+1<arr[i].size()){
                      node* next=new node(arr[i][j+1],i,j+1);
                      mini.push(next);
                  }
              }
              return ans;
    }
};
