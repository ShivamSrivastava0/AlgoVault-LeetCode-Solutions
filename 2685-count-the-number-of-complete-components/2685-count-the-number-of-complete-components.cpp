class Solution {
public:
    void dfs(int node,vector<bool>& vis, vector<vector<int>>& adj, int& nodes, int& degreeSum){
        vis[node]=true;
        nodes++;
        degreeSum+= adj[node].size();

        for(auto nei: adj[node]){
            if(!vis[nei]){
                dfs(nei, vis,adj,nodes, degreeSum);
            }
        }    
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
         vector<vector<int>> adj(n);
        vector<bool> vis(n,false);

        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int c=0;

        for(int i=0;i<n;i++){

            if(!vis[i]){
                int nodes=0;
                int degreeSum=0;
                dfs(i, vis, adj, nodes,degreeSum);

                if(degreeSum==nodes*(nodes-1))
                    c++;
            }
        }
    return c;
    }
};