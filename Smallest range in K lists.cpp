
/*https://practice.geeksforgeeks.org/problems/find-smallest-range-containing-elements-from-k-lists/1*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


// } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class node{
    public:
    int data;
    int row;
    int col;
    node(int d,int r,int c){
        data=d;
        row=r;
        col=c;
    }
};
class compare{
    public:
    bool operator()(node*a,node*b){
        return a->data>b->data;
    }
};
class Solution{
    public:
    pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
        int mini=INT_MAX;
        int maxi=INT_MIN;
          priority_queue<node*,vector<node*>,compare>minHeap;
          for(int i=0;i<k;i++){
              int ele=KSortedArray[i][0];
              mini=min(mini,ele);
              maxi=max(maxi,ele);
              minHeap.push(new node(ele,i,0));
          }
          int start=mini;
          int end=maxi;
          while(!minHeap.empty()){
              node* temp=minHeap.top();
              minHeap.pop();
              mini=temp->data;
              if(maxi-mini<end-start){
                  start=mini;
                  end=maxi;
              }
              if(temp->col+1<n){
                  maxi=max(maxi,KSortedArray[temp->row][temp->col+1]);
                  minHeap.push(new node(KSortedArray[temp->row][temp->col+1],temp->row,temp->col+1));
              }
              else{
                  break;
              }
          }
          return make_pair(start,end);
    }
};
