/*https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        
        priority_queue<long long ,vector<long long >,greater<long long >> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        long long  cost=0;
        while(pq.size()>1){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long c=a+b;
            cost=cost+c;
            pq.push(c);
        }
        return cost;
    }
};
