/*https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
     priority_queue<int ,vector<int>,greater<int>>pq;
     for(int i=0;i<k;i++){
         pq.push(arr[i]);
     }
       vector<int>ans;
     for(int i=k;i<n;i++){
         if(arr[i]>pq.top()){
             pq.pop();
             pq.push(arr[i]);
         }
     }

   while(pq.empty()==false){
       ans.push_back(pq.top());
       pq.pop();
   }
   reverse(ans.begin(),ans.end());
     return ans;
    }
};
