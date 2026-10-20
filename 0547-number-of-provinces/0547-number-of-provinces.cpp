class Solution {
public:
    void dfs(int node, vector<bool>& vis, vector<vector<int>> isConnected, int& nodes, int& degreeSum){
        vis[node]=true;
    
        for(int nei=0;nei<isConnected.size();nei++){
            if(isConnected[node][nei]==1 && !vis[nei]){
                dfs(nei, vis, isConnected, nodes, degreeSum);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> vis(isConnected.size(), false);
        int c =0;

        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                int nodes=0;
                int degreeSum=0;

                dfs(i, vis, isConnected, nodes, degreeSum);
                if(degreeSum==nodes*(nodes-1)){
                    c++;
                }
            }
        }
    return c;
    }
};