class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis){
        vis[node]=true;
        
        for(auto nei : adj[node]){
            if(!vis[nei]){
                dfs(nei, adj, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj(isConnected.size());
        
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(i!=j && isConnected[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }

        vector<bool> vis(isConnected.size(),false);
        int c=0;
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                c++;
                dfs(i, adj, vis);
            }
        }
    return c;
    }
};