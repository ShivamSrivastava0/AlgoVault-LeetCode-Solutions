class Solution {
public:
    int dfs(int node, vector<vector<int>>& adj, vector<bool>& vis,int n){
        vis[node] = true;

        if(adj[node].size()==n-1){
            return node;
        }

        for(auto nei : adj[node]){
            if(!vis[nei]){
                int op= dfs(nei, adj, vis,n);
                if(op!=-1)
                    return op;
            }
        }
    return -1;
    }

    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<vector<int>> adj(n+1);
        vector<bool> vis(n+1,false);
        
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int c = dfs(edges[0][0], adj, vis,n);        
    return c;
        }
};