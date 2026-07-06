class Solution {
public:
    void bfs(vector<vector<char>>& grid, int i, int j, set<pair<int, int>>& vis, vector<vector<int>>& directions, int m, int n){
        queue<pair<int, int>> q;
        vis.insert({i,j});
        q.push({i,j});

        while(!q.empty()){
            pair<int, int> p = q.front();
            q.pop();

            int s1 = p.first;
            int s2 = p.second;
            for(auto dir : directions){
                int new_i = dir[0] + s1;
                int new_j = dir[1] + s2;

                if(new_i>=0 && new_i<m && new_j>=0 && new_j<n && grid[new_i][new_j]=='1' && vis.find({new_i,new_j})==vis.end()){
                    q.push({new_i,new_j});
                    vis.insert({new_i,new_j});
                }
            }
        }
    }


    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int c=0;

        set<pair<int,int>> vis;
        vector<vector<int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && vis.find({i,j}) == vis.end()){
                    c++;
                    bfs(grid, i, j, vis, directions, m, n);
                }
            }
        }
return c;
    }
};