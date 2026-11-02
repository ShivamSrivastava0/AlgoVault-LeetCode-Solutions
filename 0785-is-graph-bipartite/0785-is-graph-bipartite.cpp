class Solution {
public:
    bool dfs(int node, int src,vector<int>& color, vector<vector<int>>& graph){
        color[node]=src;

        for(auto x : graph[node]){
            if(color[x]==-1){
                if(dfs(x,!src,color,graph)==false) return false;
            }
            else if(color[x]==src){
                return false;
            }
        }
    return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);

        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                if(dfs(i,0,color,graph)==false)
                    return false;
            }
        }
    return true;
    }
};