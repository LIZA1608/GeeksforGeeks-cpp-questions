/*https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1*/

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<bool>visited(V,false);
        visited[0]=true;
        queue<int>q;
        q.push(0);
        vector<int>ans;
        while(!q.empty()){
            int frontnode=q.front();
            q.pop();
            ans.push_back(frontnode);
            for(auto it:adj[frontnode]){
                if(!visited[it]){
                    visited[it]=true;
                    q.push(it);
                }
            }
        }
        return ans;
    }
};
