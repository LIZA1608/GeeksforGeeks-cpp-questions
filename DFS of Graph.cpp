/*https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=dfs_of_graph*/

class Solution {
    private:
    void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls){
        vis[node]=1;
        ls.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ls);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        int start=0;
        vector<int>ls;
        dfs(start,adj,vis,ls);
        return ls;
    }
};
