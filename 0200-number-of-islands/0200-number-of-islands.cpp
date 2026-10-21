class Solution {
public:
    void bfs(int i, int j, vector<vector<bool>>& vis, vector<vector<char>>& grid){
        queue<pair<int,int>> q;
        vis[i][j]=true;
        q.push({i,j});
        int n =grid.size();
        int m =grid[0].size();

        int delrow[] = {-1,1, 0, 0};
        int delcol[] = {0, 0, -1, 1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int k=0;k<4;k++){            
                int nrow= row + delrow[k];
                int ncol = col + delcol[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=true;
                }
            }
            }
        }

    int numIslands(vector<vector<char>>& grid) {
        int n =grid.size();
        int m =grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int c=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    c++;
                    bfs(i, j, vis, grid);
                }
            }
        }
   return c;
    }
};