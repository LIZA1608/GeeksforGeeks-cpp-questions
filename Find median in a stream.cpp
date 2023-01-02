/*https://practice.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>maxHeap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    void insertHeap(int &x)
    {
        maxHeap.push(x);
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(minHeap.size()>maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(minHeap.size()<maxHeap.size()){
            return maxHeap.top();
        }
        else{
            return(maxHeap.top()+minHeap.top())/2.0;
        }
        
    }
};
