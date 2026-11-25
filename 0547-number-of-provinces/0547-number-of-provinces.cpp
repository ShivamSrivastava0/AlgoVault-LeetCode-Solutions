class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node]=true;
        
        for(int i=0;i<adj.size();i++){
            if(adj[node][i]==1 && !vis[i]){
                dfs(i, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> vis(isConnected.size(),false);
        int c=0;
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                c++;
                dfs(i, isConnected, vis);
            }
        }
    return c;
    }
};