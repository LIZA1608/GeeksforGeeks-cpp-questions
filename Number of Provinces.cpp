/*https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number_of_provinces*/
class Solution {
    private:
    void dfs(int node,int vis[],vector<int>adjlist[]){
        vis[node]=1;
        for(auto it:adjlist[node]){
            if(!vis[it]){
                dfs(it,vis,adjlist);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
    vector<int>adjlist[V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(adj[i][j]==1 && i!=j){
            adjlist[i].push_back(j);
            adjlist[j].push_back(i);
        }
        }
    }
    int vis[V]={0};
    int count=0;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            count++;
            dfs(i,vis,adjlist);
        }
    }
    return count;
    }
};

