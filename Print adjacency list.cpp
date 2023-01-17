/*https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1*/
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>>ans;
        for(int i=0;i<V;i++){
            vector<int>temp;
            temp.push_back(i);
            for(auto j:adj[i]){
                temp.push_back(j);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
